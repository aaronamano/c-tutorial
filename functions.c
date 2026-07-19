// functions
#include <stdio.h>

int find_max(int a, int b)
{
  // a and b are variables within the scope of find_max function
  // can be referenced in the function's parameters
  if (a > b)
    return a;
  else
    return b;
}

int main(void)
{
  // max variable within the scope of main function
  int max = find_max(10, 12);
  printf("max number is %d\n", max);

  return 0;
}