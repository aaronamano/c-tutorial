// pointers7
// pointers
// pointer notation vs array notation
#include <stdio.h>

void add_one(int *array, int length);
//
//              address     value
// index    0   0x55...     1
//          1   0x56...     2
//          2   0x57...     3
//
//          p   0x58...     0x55...
//
//
int main(void){
    int a[] = {1, 2, 3};
    int *p;
    p = a;

    printf("p: %p\n", p);
    printf("a: %p\n", a);

    // uses array notation to shift position to access different memory address to get different value
    printf("%d\n", p[2]);

    // array notation here as well
    // both p[2] and a[2] print the same value
    printf("p[2] =  %d\n", p[2]);
    printf("a[2] =  %d\n", a[2]);

    // uses pointer notation (pointer arithmetic)
    // shifts over by one to access the next index
    // get the memory address of that next index
    // prints out its value because we dereferenced it
    printf("*(p + 1) = %d\n", *(p + 1)); // here we use pointer arithmetic
    printf("*(p + 2) = %d\n", *(p + 2)); // here we use pointer arithmetic

    // uses pointer notation here as well
    // gets the same thing like the two previous print statements
    // because 'p' and 'a' have the same memory addresses
    // prints out its value too because we dereferenced it
    printf("*(a + 1) = %d\n", *(a + 1)); // here we use pointer arithmetic
    printf("*(a + 2) = %d\n", *(a + 2)); // here we use pointer arithmetic

    // cannot do a = p cuz you can't modify array a's memory addresses    
    return 0;
}

void add_one(int *array, int length)
{
    for (int i = 0; i < length; i++)
    {
        array[i] += 1;
    }
    
}