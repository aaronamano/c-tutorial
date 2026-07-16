// dynamically allocated memory
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *a;
    // x amount of memory is allocated
    // the values in that memory are set to 0 first
    // ensures that it can be clean and used
    // calloc takes longer than malloc
    a = calloc(5, sizeof(int));
    a[0] = 1;
    a[1] = 5;
    a[2] = 7;
    a[3] = 9;
    a[4] = 11;

    for (int i = 0; i < 5; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }

    // the space initialized is freed so it can be available and used for something else
    // without this it can cause a memory leak or memory can run out
    // memory will be hard to access
    free(a); 

    return 0;
}