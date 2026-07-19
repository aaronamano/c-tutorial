// do-while-loops-2
// do while loops
#include <stdio.h>

int main(void){
  int number = 0;
  // 
  do
  {
    printf("enter number greater than 0: ");
    scanf("%d", &number);
    if (number <= 0) printf("number must be greater than 0\n");
  } while (number <= 0);

  return 0;
  
}