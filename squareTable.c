#include <stdio.h>


int main() {

  int i = 0;
  int n = 0;
  int odd = 0;
  int square = 0;


  printf("This program prints a table of squares \n");
  printf("Enter number of entries in table: \n");
  scanf("%d", &n);

  i = 1;
  odd = 3;
  for(square = 1; i <= n; odd += 2) {
    printf("%10d%10d\n", i, square);
    i++;
    square += odd;
  }

  return 0;





}
