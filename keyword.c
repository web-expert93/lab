#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool isKeyword(char* str){
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
        return(true);
        return(false);
}

int main(){
    char str[100];
    printf("Enter the statement:\n");
    gets(str);
    char s[10]={' ',',','(',')',';','{','}','|'};
    char *token;
    token= strtok(str,s);
    while(token!=NULL){
        isKeyword(token)?printf("%s is a keyword\n",token):printf("");
        token=strtok(NULL,s);
    }
    return 0;
}
