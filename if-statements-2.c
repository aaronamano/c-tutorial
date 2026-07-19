// if-statements-2
// if statements
// implemented relational operators
// implemented logical operators (aka boolean operators)
#include <stdio.h>

int main(void){
  int grade = 0;

  printf("enter grade: ");
  scanf("%d", &grade);

  // korean grading system
  if (grade >= 99 && grade <= 100) printf("your grade is an A+\n");
  else if (grade >= 96 && grade <= 98) printf("your grade is an A\n");
  else if (grade >= 94 && grade <= 95) printf("your grade is an A-\n");
  else if (grade >= 91 && grade <= 93) printf("your grade is a B+\n");
  else if (grade >= 88 && grade <= 90) printf("your grade is a B\n");
  else if (grade >= 85 && grade <= 87) printf("your grade is a B-\n");
  else if (grade >= 82 && grade <= 84) printf("your grade is a C+\n");
  else if (grade >= 79 && grade <= 81) printf("your grade is a C\n");
  else if (grade >= 76 && grade <= 78) printf("your grade is a C-\n");
  else if (grade >= 74 && grade <= 75) printf("your grade is a D+\n");
  else if (grade >= 72 && grade <= 73) printf("your grade is a D\n");
  else if (grade >= 70 && grade <= 71) printf("your grade is a D-\n");
  else printf("your grade is an F\n");

  return 0;
}