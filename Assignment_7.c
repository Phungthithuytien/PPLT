#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#define Max 100
#include<string.h>
void demkitutrang(char s[Max])
{ 
	int dem=0,i=0;
	while (s[i]!='\0')
	{ 	
		if(s[i]==' ')
			dem++;
		i++;
	}
	printf("\nCo %d khoang trang trong chuoi",dem);
}
void inthuong(char s[Max], int l)
{
	int i;
	for(i=0; i<=l; i++)
	{
		if('A' <= s[i] && s[i] <= 'Z')
        	s[i] = s[i] + ((int)('a') - (int)('A'));
	}
	printf("\nChuoi khi in thuong : ");
	puts(s);
}
void inhoa(char s[Max])
{
	s=strupr(s);
	printf("\nChuoi khi in hoa : ");
	puts(s);
}
void daonguoc(char s[Max], int l)
{
	int i;
	for(i=l; i>=0; i--)
	{
		printf("%c", s[i]);
	}
}
bool doixung(char s[Max], int l)
{
	int i;
	for(i=0; i<l; i++)
	{
		if(s[l-1-i] != s[i])
			return false;
	}
	return true;
}
void inhoadau(char s[Max], int l)
{
	int i;
	for(i=0; i<l; i++)
	{
		if(s[i] == ' ')
		{
			if(s[i+1]>='a' && s[i+1]<='z')
				s[i+1] = s[i+1] - ((int)('a') - (int)('A'));
		}
	}
	if(s[0]>='a' && s[0]<='z')
		s[0] = s[0] - ((int)('a') - (int)('A'));
	printf("\nChuoi khi in hoa chu cai dau :  ");
	puts(s);
} 
int demtu(char s[Max], int l) 
{
	int dem = 1, i;
	for(i=0; i<l; i++)
	{
		if(s[i] == ' ')
			dem++;
	}
	return dem;
}
int main()
{
	char s[Max];
	printf("Nhap vao chuoi ky tu: ");
	gets(s);
	printf("Chuoi moi duoc nhap vao la : %s",s);
	int l = strlen(s);
	printf("\nChuoi co do dai s = %d", l);
	printf("\n\nCau 1");
	demkitutrang(s);
	printf("\n\nCau 2");
	inhoa(s); 
	inthuong(s, l);
	printf("\nCau 3");
	printf("\nChuoi sau khi dao nguoc :  ");	
	daonguoc(s, l);
	if(doixung(s, l) == true)
		printf("\nChuoi doi xung");
	else
		printf("\nChuoi khong doi xung");
	printf("\n\nCau 4");
	inhoadau(s, l);
	printf("\nCau 5");
	printf("\nCo %d tu trong chuoi", demtu(s, l));
	return 0;
}
