// functions-5
// functions
// passing arrays to functions
#include <stdio.h>

// void functions don't return anything
void add_one(int array[], int length);

int main(void)
{
    int a[] = {2, 4, 9, 1, 3, 5};

    // %p is the placeholder for a pointer
    printf("a: %p\n", a);

    // 'a' is a memory address
    // the memory address of the array, a, is passed to the function
    // this concept isn't applicable to regular variables though (e.g. int x = 5)
    add_one(a, 6);
    for (int i = 0; i < 6; i++) printf("a[%d]=%d\n", i, a[i]);

    return 0;
}

void add_one(int array[], int length){
    printf("array: %p\n", array);
    for (int i = 0; i < length; i++) array[i] += 1;
}