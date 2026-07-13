// variable types and using printf() & scanf()
#include <stdio.h>

int main(void){
    char c = 'd';

    printf("enter a character: ");
    scanf("%c", &c);
    // %c is the placeholder for a character
    printf("char: %c\n", c);
    // using %d placeholder prints out the ASCII value of the character
    printf("char: %d\n", c);

    return 0;
}