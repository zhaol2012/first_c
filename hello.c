/* This may look like nonsense, but really is -*- mode: C -*- */
#include <stdlib.h>                                    /*@\label{include-stdlib}*/
#include <stdio.h>                                     /*@\label{include-stdio}*/

/* The main thing that this program does. */           /*@\label{C-comment}*/
int main(int argc, [[maybe_unused]] char* argv[argc+1]) { /*@\label{main-start}*/
  // Declarations
  double A[5] = {                                      /*@\label{array-declaration}*/
    [0] = 9.0,                                         /*@\label{designated-init}*/
    [1] = 2.9,
    [4] = 3.E+25,                                      /*@\label{scientific-notation}*/
    [3] = .00007,                                      /*@\label{comma-terminate}*/
  };

  // Doing some work                                   /*@\label{CPP-comment}*/
  for (size_t i = 0; i < 5; ++i) {                     /*@\label{for-loop}*/
     printf("element %zu is %g, \tits square is %g\n", /*@\label{printf-start}*/
            i,
            A[i],
            A[i]*A[i]);                                /*@\label{printf-end}*/
  }                                                    /*@\label{for-end}*/

  return EXIT_SUCCESS;                                 /*@\label{main-return}*/
}                                                      /*@\label{main-end}*/

/* // debug_demo.c
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
} */