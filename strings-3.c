// strings-3
// strings
#include <stdio.h>

int main(void)
{
  char s1[] = "This is my string."; // has length 18; has length 19 if including null terminator

  // extend to 19 to print value at index 18
  for (int i = 0; i < 19; i++)
  {
    if (s1[i] == '\0')
      printf("s1[%d] = \\0 \n", i); // index 18 is the null terminator
    else
      printf("s1[%d] = %c\n", i, s1[i]);
  }

  printf("\n%s\n", s1);

  return 0;
}