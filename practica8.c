#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
  double x = atof(argv[1]);
  double y = atof(argv[2]);
  double distance = sqrt(x*x + y*y);
  printf("%2.f\n", distance);
  return 0;
}
