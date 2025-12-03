// debug_demo.c
#include <stdio.h>
#include <stdlib.h>

void buggy_function(int n) {
    int* arr = malloc(n * sizeof(int));
    
    // 故意制造bug：数组越界
    for (int i = 0; i <= n; i++) {  // 应该是 i < n
        arr[i] = i * 2;
    }
    
    free(arr);
}

int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    printf("Debug Demo Started\n");
    
    // 设置断点在这里
    int result = factorial(5);
    printf("5! = %d\n", result);
    
    // 测试buggy函数
    buggy_function(5);
    
    printf("Debug Demo Finished\n");
    return 0;
}