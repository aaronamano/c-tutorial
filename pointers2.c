// pointers2
// pointers
#include <stdio.h>

int main(void){
    int a = 5;
    int b = 10;

    // declares the pointer
    // stores a pointer to an int
    int *p;

    // the & operator means get memory address of b
    // p stores b's memory address so p points to b
    // p can access b
    p = &b;
    printf("p: %p\n", p);
    printf("&b: %p\n", &b);
    printf("&a: %p\n", &a);

    // p now stores memory address of a instead of b
    p = &a;
    printf("p: %p\n", p);

    // dereferences the pointer
    // *p gets the value that p is pointing to (a's value)
    *p = *p + 1;
    // 5 + 1 = 6
    // so a = 6 and *p = 6
    printf("a: %d\n", a);
    printf("*p: %d\n", *p);

    // a = 6 + 6
    // a = 12
    a = a + *p;
    printf("a: %d\n", a);
    
    return 0;
}