#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
  int p = atoi(argv[1]);
  int r = atoi(argv[2]);
  int t = atoi(argv[3]);
  int quantity = p * exp(r*t);
  printf("%d\n", quantity);
  return 0;
}
