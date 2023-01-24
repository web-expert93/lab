#include<stdio.h>
#include<string.h>

int main()
{
    printf("Enter the string: ");
    char str[100];
    gets(str);
    int len = strlen(str);

    for(int i=0; i< len; i++)
    {
        if(str[i] == '/' && str[i+1] == '/')
        {
            i += 2;
            while(i < len)
            {
                printf("%c", str[i]);
                i++;
            }
            printf("\n");
        }
        else if(str[i] == '/' && str[i+1] == '*')
        {
            i += 2;
            while(str[i] != '*' && str[i+1] != '/')
            {
                printf("%c", str[i]);
                i++;
            }
            printf("\n");
        }
    }
}
