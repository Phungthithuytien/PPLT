#include <stdio.h>
#include <string.h>
#define m 100

void ho(char str[]);
void ten(char str[]);

void main()
{
    char str[m];
    printf("Nhap ho va ten : ");
    fgets(str,m,stdin);
    printf("Ho: ");
    ho(str);
    printf("\nTen: ");
    ten(str);
}

void ho(char str[])
{
    int i;
    char z[100];
    for(i=0; i<strlen(str); i++)
    {
        if(str[i] != ' ')
        {
            printf("%c",str[i]);
        }
        else break;
    }
}

void ten(char str[])
{
    int i,j;
    for(i = strlen(str)-1; i>=0; i--)
    {
        if(str[i] == ' ')
        {
            for(j = i; j<strlen(str); j++)
            {
               printf("%c",str[j]);
            }
            break;
        }
    }
}
