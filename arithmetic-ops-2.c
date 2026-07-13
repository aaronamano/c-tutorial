// arithmetic operators
#include <stdio.h>

int main(void){
    int x = 11, y = 3;

    int div = x / y;
    int mod = x % y;

    // prints a whole number when dividing two integers together
    printf("quotient: %d\n", div);
    // modulus prints the remainder
    printf("remainder: %d\n", mod);

    return 0;
}