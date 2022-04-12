#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int days = atoi(argv[1]);
  printf("Dias: %d\n", days);
  printf("Años: %d\n",days / 365 );
  days %= 365;
  printf("Semanas: %d\n", days / 7);
  days %= 7;
  printf("Dias: %d\n", days / 1);
  days %= 1;
  return 0;
}
