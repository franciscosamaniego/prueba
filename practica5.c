#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int c = atoi(argv[3]);
  int f = a >= b + c;
   f = b >= a + c || f;
   f = c >= a + b || f;
  printf("%s\n", f ? "falso" : "verdadero");
  return 0;
}
