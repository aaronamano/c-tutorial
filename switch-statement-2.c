// switch-statement-2
// switch statements
#include <stdio.h>

int main(void){
  int number = 0;
  printf("Enter a number: ");
  scanf("%d", &number);

  switch (number)
  {
    case 0:
      printf("Case 0!\n");
      break; // use break to prevent fall through logic
    case 1:
      printf("Case 1!\n");
      break;
    case 2:
      printf("Case 2!\n");
      break;
    default: // default case if the other cases aren't met; breaks on its own
      printf("Default case!\n");
  }

  printf("Switch Over!\n");

  return 0;
  
}