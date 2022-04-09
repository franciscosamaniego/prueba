#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define g  9.81

int main(int argc, char *argv[]) {
  double x0 = atoi(argv[1]);
  double v0 = atoi(argv[2]);
  double t = atoi(argv[3]);
  printf("%.2f\n", x0 + v0 * t + g * (t *t) /2);
  return 0;
}
