// while-loops-2
// while loops
#include <stdio.h>

int main(void){
  int i = 0;
  int number = 0;
  int total = 0;
  int n = 0;

  printf("how many numbers: ");
  scanf("%d", &n);

  while (i < n){
    printf("enter number %d: ", i+1);
    scanf("%d", &number);
    total += number;
    i++;
  }

  printf("total: %d\n", total);
  printf("average: %d\n", total / n);

  return 0;
}