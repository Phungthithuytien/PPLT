#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char *String(char *str)
{
    char *cuoi; 
    while(isspace((unsigned char)*str)) str++;
    if(*str == 0) return str; 
    cuoi = str + strlen(str) - 1;      
    while(cuoi > str && isspace((unsigned char)*cuoi)) cuoi--;
    cuoi[1] = '\0';
    return str;
}
int main(void)
{
    const char *str1 = "   programming   Method     "; 
    printf("[%s]\n", str1);
    char *tmp = strdup(str1); 
    printf("[%s]\n", String(tmp));
    free(tmp);
    exit(EXIT_SUCCESS);
}
