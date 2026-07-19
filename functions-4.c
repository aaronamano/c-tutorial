// functions-4
// functions
#include <stdio.h>

// void functions don't return anything
void print_two(float a, float b);

int main(void)
{
  float x = 2.5;
  float y = 4.2;
  print_two(x, y);
  return 0;
}

void print_two(float a, float b){
  printf("%.2f\n%.2f\n", a, b);
  // don't put 'return' here
}