#include <stdio.h>
#include <string.h>

void timeCoversion(char*s)
{
    int hour;
    char ampm[3];
    sscanf(s,"%2d:%*s",&hour);
    strncpy(ampm,&s[8],2);
    ampm[2]='\0';

    if(strcmp(ampm,"AM")==0)
    {
        if(hour == 12)
        s[0]=s[1]='0';
    }
    else
    {
        if(hour!=12)
        {
            hour+=12;
            s[0]='0'+hour/10;
            s[1]='0'+hour%10;

        }
    }
    s[8]='\0';
    printf("%s\n",s);
}

int main()
{
    char time[11];
    scanf("%s,time");
    timeCoversion(time);
    return 0;
}