#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char str[50];
    scanf("%[^\n]s",str);
    for(int i=0;str[i]!='\0';i++)
    {
        if(isupper(str[i]))
        str[i]=tolower(str[i]);
        else
        str[i]=toupper(str[i]);
    }
    printf("%s",str);
    return 0;
}