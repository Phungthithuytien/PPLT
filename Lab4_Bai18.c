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
void nhapnk(int n, int *k)
{
	do
	{
		printf("Nhap so dong : %d", n);
		printf("\nNhap so cot : ");
		scanf("%d",&*k);
		if(*k<=0 || *k>100)
			printf("\nSai..nhap lai");
	}
	while(*k<=0 || *k>100);
}
void input2(int b[][MAX], int n, int k)
{
	int i, j;
	for(i=0; i<n; i++)
	{
		for(j=0; j<k; j++)
		{
			printf("Nhap phan thu thu b[%d,%d] : ", i, j);
			scanf("%d", &b[i][j]);	
		}
	}
}
void output2(int b[][MAX], int n, int k)
{
	int i, j;
	for(i=0; i<n; i++)
	{
		for(j=0; j<k; j++)
		{
			printf("%d\t", b[i][j]);			
		}
		printf("\n");
	}
}
void  tich2mang(int a[][MAX], int b[][MAX], int m, int n, int k) 
{
	int i, j, z, c[MAX][MAX];
	for (i=0 ; i<m; i++) 
	{
		for (j=0 ; j<k; j++) 
		{
			for (z=0 ; z<n; z++) 
			{
				c[i][j] += a[i][z]*b[z][j];
			}
		}
	}
	for (i=0 ; i<m; i++) 
	{
		for (j=0 ; j<k; j++) 
		{
			printf("%d\t", c[i][j]);
		}
	}
}
int main()
{
	int m, n, k;
	int a[MAX][MAX], b[MAX][MAX];
	nhapmn(&m, &n);
	input(a, m, n);
	printf("\nMang 2 chieu thu nhat :\n");
	output(a, m, n);
	nhapnk(n, &k);
	input2(b, n, k);
	printf("\nMang 2 chieu thu hai :\n");
	output2(b, n, k);
	tich2mang(a, b, m, n, k);
	return 0;
}
