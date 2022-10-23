#include<stdio.h>
#include<string.h>
#define MAX 50
int kiemtra(char s[]);
void kt(char s[]);
void main()
{
	char s[MAX];
	printf("Nhap chuoi: ");
	fgets(s, sizeof(s), stdin);
	fflush(stdin);
	kiemtra(s);
	if(kiemtra(s)==1)
	{
	    kt(s);
	}
	else 
	    printf("Chuoi khong co ki tu");
}
int kiemtra(char s[])
{
    int i;
	int n=strlen(s)-1;
    for(i=0;i<n;i++)
	{
		if(s[i] != ' ')
		    return 1;
    }
	return 0;
}
void kt(char s[])
{
    int i;
	int n=strlen(s)-1;
    for(i=0; i<n ;i++)
	{
		if(s[i]!=' ')
		{
		    printf("\nVi tri dau tien: %d",i+1);
		    break;
		}
    }
}