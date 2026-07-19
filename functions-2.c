// functions-2
// functions
#include <stdio.h>

// function declaration/prototype
int find_max(int a, int b);

int main(void)
{
  int max = find_max(10, 12);
  printf("max number is %d\n", max);

  return 0;
}

// function definition
int find_max(int a, int b)
{
  if (a > b)
    return a;
  else
    return b;
}