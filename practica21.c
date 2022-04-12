#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int c = atoi(argv[3]);
  int d = atoi(argv[4]);
  int e = atoi(argv[5]);
  int suma = 0;
  suma += a&1 ? a : 0;
  suma += b&1 ? b : 0;
  suma += c&1 ? c : 0;
  suma += d&1 ? d : 0;
  suma += e&1 ? e : 0;
  printf("%d\n", suma);
  return 0;
}
