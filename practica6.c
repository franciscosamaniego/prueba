#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
    srand(time(NULL));
  int number = rand() %7 + 1;
  int numero = rand() %7 + 1;
  printf("%d\n", number + numero);
  return 0;
}
