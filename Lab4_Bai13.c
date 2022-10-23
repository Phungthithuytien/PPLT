#include<stdio.h>
#define MAX 100
void nhapn(int *n)
{
	do
	{
		printf("Nhap n:");
		scanf("%d",&*n);
		if(*n<=0 || *n>100)
			printf("Sai..nhap lai");
	}
	while(*n<=0 || *n>100);
}
void input(int a[], int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("\nNhap phan thu thu a[%d] : ",i);
		scanf("%d",&a[i]);	
	}
}
void output(int a[], int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("%d\t",a[i]);		
	}
}
void chanle(int a[], int n)
{
	int i;
	int C[MAX], L[MAX];
	int c = 0, l = 0;
	for(i=0; i<n; i++)
	{
		if(a[i]%2 == 0)
		{
			C[c++] = a[i];			
		}
		else
		{
			L[l++] = a[i];
		}
	}
	printf("\nMang chan : ");
	output(C, c);
	printf("\nMang le : "); 
	output(L, l);
	int cmoi = 0, lmoi = 0;
	for(i=0; i<n; i++)
	{
		if(i < c)
			a[i] = C[cmoi++];
		else		
			a[i] = L[lmoi++];		
	}	
}
int main()
{
	int n;
	int a[MAX];
	nhapn(&n);
	input(a, n);
	printf("\nMang :  ");
	output(a, n);
	printf("\nKhi tach mang ta duoc : ");
	chanle(a, n);
	return 0;
}
