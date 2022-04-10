#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int x = atoi(argv[1]);
  int y = atoi(argv[2]);
  int z = atoi(argv[3]);
  printf("%s\n", x > y && y > z || x < y && y < z ? "verdadero" : "falso");
  return 0;
}
