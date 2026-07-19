// typedef-and-struct-7
// typedef and structs
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
  int data1;
  int *array;
} Info;

int main(void)
{
  Info a;
  a.data1 = 7;
  a.array = malloc(sizeof(int) * 5);
  for (int i = 0; i < 5; i++) a.array[i] = i + 1;

  // b copies a's pointer
  Info b = a;
  printf("b.data1: %d\n", b.data1); // prints 7
  for (int i = 0; i < 5; i++)
  {
    // prints out the same thing as a.array
    printf("b.array[%d] = %d\n", i, b.array[i]);
  }

  // both have the same memory address
  printf("a.array: %p\n", a.array);
  printf("b.array: %p\n", b.array);
  
  b.array[0] = 10; // it also modifies a.array[0] since they have the same memory address
  for (int i = 0; i < 5; i++)
  {
    printf("a.array[%d] = %d\n", i, a.array[i]);
  }

  free(a.array);
  
  return 0;
}