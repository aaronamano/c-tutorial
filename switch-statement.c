// switch-statement
// switch statements
#include <stdio.h>

int main(void){
    int number = 0;

    // uses fall through logic
    switch (number)
    {
        case 0:
            printf("Case 0!\n");
        case 1:
            printf("Case 1!\n");
        case 2:
            printf("Case 2!\n");
    }

    // if number = 0 -> Case 0!, Case 1!, Case 2!
    // if number = 1 -> Case 1!, Case 2!
    // if number = 2 -> Case 2!

    return 0;
    
}