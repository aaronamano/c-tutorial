// if-statements
// if statements
// implemented relational operators
#include <stdio.h>

int main(void){
  int x = 0;

  printf("enter a number: ");
  scanf("%d", &x);

  int mod = x % 2;

  if (mod == 1){
    printf("this is an odd number\n");
  }
  else {
    printf("this is an even number\n");
  }

  return 0;
}