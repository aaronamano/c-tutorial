// constants
// constants with define vs constant variables
#include <stdio.h>
#include <stdlib.h>

// using define
#define NAME 5

void func();

int main(void)
{
  func();
  printf("%d\n", NAME);

  return 0;
}

void func()
{
  printf("%d\n", NAME);
}