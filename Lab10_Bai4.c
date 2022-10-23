#include <stdio.h>
#include <string.h>

void dao(char s[]);
int so_sanh(char *a, char *b);

int main()
{
    char so[30];
    printf("Nhap chuoi : ");
    scanf("%s", &so);
    char b[30];
    strcpy(b, so);
    dao(so);
    if(so_sanh(so, b) == -1)
    {
        printf("Chuoi khong la chuoi doi xung");
    }
    else
    {
        printf("Chuoi la chuoi doi xung");
    }
    return 0;
}

void dao(char s[])
{
    char temp[30];
    int i, j = 0;
    for (i = strlen(s) - 1; i >= 0; i--)
    {
        temp[j++] = s[i];
    }
    strcpy(s, temp);
}

int so_sanh(char a[], char b[])
{
    if(strcmp(a, b) != 0)
    {
        return -1;
    }
    return -2;
}
