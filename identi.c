#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include<stdbool.h>
bool isKeyword(char* str)
{
    if (!strcmp(str, "auto") || !strcmp(str, "default")
            || !strcmp(str, "signed") || !strcmp(str, "enum")
            ||!strcmp(str, "extern") || !strcmp(str, "for")
            || !strcmp(str, "register") || !strcmp(str, "if")
            || !strcmp(str, "else")  || !strcmp(str, "int")
            || !strcmp(str, "while") || !strcmp(str, "do")
            || !strcmp(str, "break") || !strcmp(str, "continue")
            || !strcmp(str, "double") || !strcmp(str, "float")
            || !strcmp(str, "return") || !strcmp(str, "char")
            || !strcmp(str, "case") || !strcmp(str, "const")
            || !strcmp(str, "sizeof") || !strcmp(str, "long")
            || !strcmp(str, "short") || !strcmp(str, "typedef")
            || !strcmp(str, "switch") || !strcmp(str, "unsigned")
            || !strcmp(str, "void") || !strcmp(str, "static")
            || !strcmp(str, "struct") || !strcmp(str, "goto")
            || !strcmp(str, "union") || !strcmp(str, "volatile"))
        return (true);
    return (false);
}
int main ()
{
    char str[100];
    printf("Enter The Statement: ");
    gets(str);
    char s[20] = {' ','-','+','*','/',',',';','>','<','=','(',')','[',']','{','}'};
    char *token;
    token = strtok(str, s);
    printf("\n Identifiers in Statement\n");
    while( token != NULL )
    {
        /*if(isdigit(token[0])!=0)
        {
            printf( " %s ", token );
            printf("Identifies\n");
        }*/
         if(isalpha(token[0])!=0)
        {
            if(isKeyword(token)==false)
            {
                printf( " %s ", token );
                printf("Identifier\n");
            }


        }
        else if(token[0]=='_')
        {
            printf( " %s ", token );
                printf("Identifier\n");
        }
         else
            {
                printf("\n");
            }
        token = strtok(NULL, s);

    }
    return(0);
}

