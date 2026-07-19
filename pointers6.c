// pointers6
// pointers
// pointer notation vs array notation
#include <stdio.h>

// we can often treat arrays like pointers and vice versa
// use of pointer notation
void add_one(int *array, int length);

int main(void){
  int a[] = {1, 2, 3};
  add_one(a, 3);
  for (int i = 0; i < 3; i++)
  {
    printf("a[%d] = %d\n", i, a[i]);
  }
  
  return 0;
}

void add_one(int *array, int length)
{
  for (int i = 0; i < length; i++)
  {
    array[i] += 1;
  }
  
}