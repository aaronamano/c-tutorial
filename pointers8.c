// pointers
// pointer notation vs array notation
#include <stdio.h>

void add_one(int *array, int length);

int main(void)
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // shifting memory address of 'a' by 5 positions to the right
    // so only modifies the 2nd half of the array (indices 5-9)
    // therefore we define half the length which is 5
    add_one(a + 5, 5);
    for (int i = 0; i < 10; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }

    return 0;
}

void add_one(int *array, int length)
{
    for (int i = 0; i < length; i++)
    {
        array[i] += 1;
    }
}