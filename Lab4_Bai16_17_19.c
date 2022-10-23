#include<stdio.h>
#include<stdbool.h>
#define MAX 100
void nhapmn(int *m, int *n)
{
	do
	{
		printf("Nhap so dong : ");
		scanf("%d",&*m);
		printf("Nhap so cot : ");
		scanf("%d",&*n);
		if(*m<=0 || *m>100 ||*n<=0 || *n>100)
			printf("\nSai..nhap lai");
	}
	while(*m<=0 || *m>100 ||*n<=0 || *n>100);
}
void input(int a[][MAX], int m, int n)
{
	int i, j;
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("Nhap phan thu thu a[%d,%d] : ", i, j);
			scanf("%d", &a[i][j]);	
		}
	}
}
void output(int a[][MAX], int m, int n)
{
	int i, j;
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d\t", a[i][j]);			
		}
		printf("\n");
	}
}
void input2(int b[][MAX], int m, int n)
{
	int i, j;
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("Nhap phan thu thu b[%d,%d] : ", i, j);
			scanf("%d", &b[i][j]);	
		}
	}
}
void output2(int b[][MAX], int m, int n)
{
	int i, j;
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d\t", b[i][j]);			
		}
		printf("\n");
	}
}
void tongmatran(int a[][MAX], int b[][MAX], int m, int n)
{
	int i, j, c[MAX][MAX]; 
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			c[i][j]	= a[i][j]+b[i][j];		
		}
	}
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d\t", c[i][j]); 
		}
	} 
}		 
void hieumatran(int a[][MAX], int b[][MAX], int m, int n)
{
	int i, j, c[MAX][MAX]; 
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			c[i][j]	= a[i][j]-b[i][j];		
		}
	}
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d\t", c[i][j]); 
		}
	} 
}
bool sosanh(int a[][MAX], int b[][MAX], int m, int n)
{
	int i, j, c[MAX][MAX]; 
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			if(a[i][j]!=b[i][j])
				return false;	
		}
	}
	return true;
}
int main()
{
	int m, n;
	int a[MAX][MAX], b[MAX][MAX];
	nhapmn(&m, &n);
	input(a, m, n);
	printf("\nMang 2 chieu thu nhat :\n");
	output(a, m, n);
	printf("\nMang 2 chieu thu hai :\n");
	input2(b, m, n);
	output2(b, m, n);
	printf("\nTong 2 ma tran la : ");
	tongmatran(a, b, m, n); 
	printf("\nHieu 2 ma tran la : ");
	hieumatran(a, b, m, n);
	if(sosanh(a, b, m, n))
		printf("\nHai mang bang nhau");
	else
		printf("\nHai mang khong bang nhau");
	return 0;
}
