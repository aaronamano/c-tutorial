// typedef-and-struct-4
// typedef and structs
#include <stdio.h>
#include <string.h>

typedef struct
{
    char firstname[50];
    char lastname[50];
    int age;
} Student;

void printStudent(Student s);

int main(void)
{
    Student s1;
    s1.age = 20;
    strcpy(s1.firstname, "Devon");
    strcpy(s1.lastname, "Smith");

    printStudent(s1);
    printf("\n%s %s\n", s1.firstname, s1.lastname); // prints same values that were originally defined
    printf("\nAge: %d\n", s1.age); // prints same value that was originally defined

    return 0;
}

void printStudent(Student s)
{
    printf("%s %s\n", s.firstname, s.lastname);
    printf("Age: %d\n", s.age);
    s.age = 25; // modification doesn't affect the struct
    s.firstname[0] = 'K'; // modification doesn't affect the struct
}

// ultimately, structs are passed by value
// all the data/values in the structs are copied and passed to the function
// this could be dangerous if you're duplicating and passing a ton of data