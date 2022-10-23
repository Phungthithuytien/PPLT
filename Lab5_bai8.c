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
	    printf("Chuoi khong co chu cai");
}
int kiemtra(char s[])
{
    int i;
	int n=strlen(s)-1;
    for(i=0;i<n;i++)
	{
		if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
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
		if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
		{
		    printf("\nVi tri chu cai dau tien: %d",i+1);
		    break;
		}
    }
}