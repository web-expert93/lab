#include <string.h>
#include <stdio.h>
#include<ctype.h>
int main ()
{
    char str[100];
    int n,i;
    printf("Enter The Statement: ");
    gets(str);
    char s[20] = {' ','-','+','*','/',',',';','>','<','=','(',')','[',']','{','}'};
    char *token;

    token = strtok(str, s);
    printf("\nNumbers Statement\n");

    while( token != NULL )
    {

        n=strlen(token);
        int cont=0;
        for(i=0; i<n; i++)
        {
            if(isdigit(token[i])==1)
            {
                cont=1;
            }
            else
            {
                cont=0;
                break;
            }
        }
        if(cont==1)
        {
            printf("%s ",token);
            printf("is a Number\n");
        }

        token = strtok(NULL, s);
    }
    return(0);
}
