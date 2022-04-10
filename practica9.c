#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
  srand(time(NULL));
  int a = atof(argv[1]);
  int b = atof(argv[2]);
  int numero = rand() % (a - b + 1) + b;
  printf("%d\n", numero);
  return 0;
}
