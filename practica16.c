#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int u1 = atoi(argv[1]);
  int u2 = atoi(argv[2]);
  int v1 = atoi(argv[3]);
  int v2 = atoi(argv[4]);
  printf("%d\n", u1 * v1 + u2 * v2);
  return 0;
}
