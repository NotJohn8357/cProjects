#include <stdio.h>
#include <stdlib.h>

int main () {

  int r = rand() % 10;
  int largestNumber = r;
  int userGuess = 0;

  while(userGuess < largestNumber) {
    printf("Enter a number\n");
    scanf("%d", &userGuess);
      if(userGuess < largestNumber) {
        printf("Too Small!\n");
      }
  }

  printf("You Guessed Right!\n");


}
