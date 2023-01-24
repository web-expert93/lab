#include<stdio.h>
#include<string.h>

int main()
{
    printf("Enter the statement: ");
    char str[100];
    gets(str);

    int len = strlen(str);

    printf("MOV %c, R0 \n", str[2]);
    if(str[3] == '+')
    {
        printf("ADD %c, R0\n", str[4]);
    }
    else if(str[3] == '-')
    {
        printf("SUB %c, R0\n", str[4]);
    }
    else if(str[3] == '*')
    {
        printf("MUL %c, R0\n", str[4]);
    }
    else if(str[3] == '/')
    {
        printf("DIV %c, R0\n", str[4]);
    }
    printf("MOV R0, %c \n", str[0]);
}
