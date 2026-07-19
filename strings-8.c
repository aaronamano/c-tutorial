// strings-8
// strings
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
  char s[] = "This IS tHe WaY.";
  for (int i = 0; i < strlen(s); i++)
  {
    printf("%c ", s[i]);
    // isupper and islower checks characters that are upper/lower case
    if (isupper(s[i])) printf("upper\n");
    else if (islower(s[i])) printf("lower\n");
    else printf("\n");
  }
  
  return 0;
}