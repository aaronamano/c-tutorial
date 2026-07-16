// dynamically allocated memory
// helps create blocks of memory that we want to resize later on
// the stack grows down; the heap grows up
#include <stdio.h>
#include <stdlib.h>
// stack
//
// variable     address     value
// a            0x12...     5
// b            0x13...     6
//              0x14...
//              0x15...
//              0x16...
//              0x17...
//              0x18...
//              0x19...
//
// heap
//

int main(void)
{
    int *a;
    // create space to store 5 integers
    // returns memory address of the block of space using malloc()
    a = malloc(sizeof(int) * 5);
    a[0] = 1;
    a[1] = 5;
    a[2] = 7;
    a[3] = 9;
    a[4] = 11;

    for (int i = 0; i < 5; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }
    

    return 0;
}