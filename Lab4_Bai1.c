#include <stdio.h>
float caua(int i, int n)
{
	float s=0;
	for(i = 1; i<=n; i++)
	{
		s = s+i/2.0; 
	} 
	return s; 
} 
int caub(int i, int n)
{
	int s=0;
    for(i = 1; i<=n; i++)
	{
		s = s+(2*i+1); 
	}
	return s; 
} 
int cauc(int i, int n)
{
	int s=1, t=1, p=0;
	for(i = 1; i<=n; i++)
	{
		while(t<=i) 
		{
			s=s*t; 
			t++; 
		}
		p=p+s+1;
	} 
	return p; 
} 
int caud(int i, int n)
{
	int s=1, t=1, p=1;
	for(i = 1; i<=n; i++)
	{
	while(t<=i) 
		{
			s=s*t; 
			t++; 
		}
		p=p*s;
	} 
	return p; 
} 
float caue(int i, int n)
{
	float s = 1;
	for(i = 1; i<=n; i++)
	{
		s = s*((2.0*i)/3);
	} 
	return s; 
} 
int main ()
{
	int n, i;
	printf("Nhap i : ");
	scanf("%d", &i);
	printf("Nhap n : ");
	scanf("%d", &n);
	printf("\nCau 1 ");
	printf("\nCau a = %f", caua(i, n));
	printf("\nCau b = %d", caub(i, n));
	printf("\nCau c = %d", cauc(i, n));
	printf("\nCau d = %d", caud(i, n));
	printf("\nCau e = %f", caue(i, n));
} 
