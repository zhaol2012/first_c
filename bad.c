/* This may look like nonsense, but really is -*- mode: C -*- */

/* The main thing that this program does. */
int main() {
  int a = 5;
  int b = 7;
  int c = 0;
  if(a < b)
    c = 1;

  return 0;                                           /*@\label{main-return-badly}*/
}
