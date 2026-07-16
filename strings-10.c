// strings
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char s[] = "This IS tHe WaY.";
    printf("%s\n", s);

    for (int i = 0; i < strlen(s); i++)
    {
        if (isupper(s[i]))
            s[i] = tolower(s[i]);
        else if (islower(s[i]))
            s[i] = toupper(s[i]);
    }
    printf("%s\n", s);

    return 0;
}