// constants3
// constants with define vs constant variables
#include <stdio.h>
#include <stdlib.h>

// this variable is initialized globally
int x = 10;

void func();

int main(void)
{
  printf("x: %d\n", x); // prints out 10

  // using global scopes like x++ can be dangerous
  // because it can be modifed and applied to all scopes that access this variable
  // this is aka as spaghetti code or a side effect
  x++;
  
  func(); // prints out 12

  return 0;
}

void func()
{
  x++;
  printf("x: %d\n", x);
}