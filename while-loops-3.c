// while loops
#include <stdio.h>

int main(void){
    int number = 0;
    int max = -1;

    // indefinite loop
    while (number != -1)
    {
        printf("enter a number: ");
        scanf("%d", &number);
        // nested structure
        if (number > max) max = number;
        // debug statement to keep track of current max
        printf("max: %d\n", max);
    }
    printf("max: %d\n", max);

    return 0;
}