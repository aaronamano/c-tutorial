// strings
#include <stdio.h>

int main(void){
    char s1[] = "This is my string."; // has length 18

    for (int i = 0; i < 18; i++){
        printf("s1[%d] = %c\n", i, s1[i]);
    }

    printf("\n%s\n", s1);

    return 0;

}