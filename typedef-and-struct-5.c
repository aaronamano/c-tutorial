// typedef-and-struct-5
// typedef and structs
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    char firstname[50];
    char lastname[50];
    int age;
} Student;

void printStudent(Student s);
void ageStudent(Student *s);

int main(void)
{
    Student *s1;

    s1 = calloc(1, sizeof(Student));
    // accessing the memory address where the struct is stored and getting its age
    // and we give an age a value of 20
    s1->age = 20; // equivalent to (*s1).age = 20;
    printf("Age %d\n", s1->age);
    ageStudent(s1);
    printf("Age %d\n", s1->age);

    free(s1);

    return 0;
}

void printStudent(Student s)
{
    printf("%s %s\n", s.firstname, s.lastname);
    printf("Age: %d\n", s.age);
}

void ageStudent(Student *s)
{
    // we can modify the struct's age since we pass by reference
    s->age += 1;
}