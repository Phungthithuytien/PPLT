#include <stdio.h>
float caua(int n)
{
	float t = 0;
	int i;
	for(i=1; i<=n; i++)
	{
		t = t + i/2.0;
	}
	return t;
} 
int caub(int n)
{
	int t = 0;
	int i;
	for(i=1; i<=n; i++)
	{
		t = t + (2*i + 1);
	}
	return t;
} 
float cauc(int n)
{
	float t = 0;
	int i;
	for(i=1; i<=n; i++)
	{
		t = t + ((i + 1)*1.0)/(i + 2);
	}
	return t;
} 
int caud(int n)
{
	int i, j, s = 0;
	for(i=1; i<=n; i++)
	{
		j = i; 
		int t = 1;
		while(j>0)
		{
			t = t*j;
			j--;
		}
		s = s + (t + 1);
	}
	return s;
} 
int caue(int n)
{
	int t = 1;
	int i;
	for(i=1; i<=n; i++)
	{
		t = t*i;
	}
	return t;
} 
int cauf(int n)
{
	int i, j, s = 1;
	for(i=1; i<=n; i++)
	{
		j = i; 
		int t = 1;
		while(j>0)
		{
			t = t*j;
			j--;
		}
		s = s*t;
	}
	return s;
} 
float caug(int n)
{
	float t = 1;
	int i;
	for(i=1; i<=n; i++)
	{
		t = t * (2.0*i/3);
	}
	return t;
} 
float cauh(int n)
{
	float t = 1;
	int i;
	for(i=1; i<=n; i++)
	{
		t = t * (1.0*(i - 1))/(i+1);
	}
	return t;
} 
int main()
{
	int n, i;
	printf("Nhap n : ");
	scanf("%d", &n);	
	printf("\nCau a = %f", caua(n));
	printf("\nCau b = %d", caub(n));
	printf("\nCau c = %f", cauc(n));
	printf("\nCau d = %d", caud(n));
	printf("\nCau e = %d", caue(n));
	printf("\nCau f = %d", cauf(n));
	printf("\nCau g = %f", caug(n));
	printf("\nCau h = %f", cauh(n));
}
