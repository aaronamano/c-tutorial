// pointers3
// pointers
// pass by reference aka pass-by-pointer
#include <stdio.h>

void add_one(int *a);

int main(void){
    int b = 5;
    printf("&b: %p\n", &b);
    add_one(&b);
    printf("b: %d\n", b);
    
    return 0;
}

void add_one(int *a)
{
    printf("a: %p\n", a);
    *a = *a + 1;
}