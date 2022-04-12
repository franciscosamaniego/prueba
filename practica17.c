#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int vx = atoi(argv[1]);
  int vy = atoi(argv[2]);
  int vz = atoi(argv[3]);
  int ux = atoi(argv[4]);
  int uy = atoi(argv[5]);
  int uz = atoi(argv[6]);
  printf("%d, %d, %d\n", vy * uz - vz * uy, vz * ux - vx * uz, vx * uy - vy * ux);
  return 0;
}
