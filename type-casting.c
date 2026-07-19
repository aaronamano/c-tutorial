// type-casting
// type casting
#include <stdio.h>

int main(int argc, char *argv[])
{
  int a = 5;
  int b = 2;

  // 'a' gets converted from int->double first
  // then is divided by 'b'
  double c = (double) a / b;

  printf("%d / %d = %d\n", a, b, a / b); // prints 2
  printf("%d / %d = %.2f\n", a, b, c); // prints 2.50

  return 0;
}
