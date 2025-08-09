#include <stdio.h>
#include <ctype.h> 

int main() 
{
    char s[1000];
    int a[26] = {0};
    int b = 0;

    fgets(s, sizeof(s), stdin);

    for (int i = 0; s[i] != '\0'; i++) 
    {
        if (isalpha(s[i])) 
        {
            int idx = tolower(s[i]) - 'a';
            if (a[idx] == 0) 
            {
                a[idx] = 1;
                b++;
            }
        }
    }

    if (b == 26)
        printf("pangram\n");
    else
        printf("not pangram\n");

    return 0;
}