// constants2
// constants with define vs constant variables
#include <stdio.h>
#include <stdlib.h>

// uses global scope
#define NAME 5

void func();

int main(void)
{
  // using regular way to define const (like how we define variables in general)
  // uses local scope
  const int x = 5;

  /*
  x = x + 2; // can't do this ❌
  */
  printf("%d\n", x + 2); // can do this ✅

  return 0;
}

void func()
{
  printf("%d\n", NAME);
}