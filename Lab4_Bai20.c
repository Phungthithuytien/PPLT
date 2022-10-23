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
void chuyendoi(int a[][MAX], int m, int n)
{
	int i, j; 
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			printf("%d\t", a[j][i]);			
		}
		printf("\n");
	}
}
int main()
{
	int m, n;
	int a[MAX][MAX];
	nhapmn(&m, &n);
	input(a, m, n);
	printf("\nMang 2 chieu :\n");
	output(a, m, n);
	printf("\nMang sau khi chuyen doi : \n"); 
	chuyendoi(a,m,n);
	return 0;
}
