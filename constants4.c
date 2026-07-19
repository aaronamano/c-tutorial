// constants4
// Global scope variables
#include <stdio.h>
#include <stdlib.h>

int x = 10;

void func();

int main(void)
{
  int x = 2;
  printf("x: %d\n", x); // prints out 2
  // defaults to using the local variable, x
  // having many same variable names in different scopes can be confusing and inefficient

  x++;
  
  func(); // prints out 11

  return 0;
}

void func()
{
  x++;
  printf("x: %d\n", x);
}