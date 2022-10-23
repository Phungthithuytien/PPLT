#include<stdio.h>
#define MAX 100
void nhapn(int *n)
{
	do
	{
		printf("Nhap n : ");
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
int goigiatri(int a[], int n, int x)
{
	int i;
	for(i=0; i<n; i++)
	{
		if(i = x)
			return a[i];
	}
}
void tangdan(int a[], int n)
{
	int i, j, the;
	for(i = 0; i < n - 1; i++)
	{
        for(j = i + 1; j < n; j++)
		{
            if(a[i] > a[j])
			{
                the = a[i];
                a[i] = a[j];
                a[j] = the;        
            }
        }
    }
}
int main()
{
	int n, x;
	int a[MAX];
	nhapn(&n);
	input(a, n);
	printf("\nMang :  ");
	output(a, n);
	printf("\nNhap vi tri cua phan tu can goi : ");
	scanf("%d", &x);
	printf("\nGia tri cua vi tri a[%d] la : %d", x,	goigiatri(a, n, x));
	printf("\nMang sap xep theo thu tu tang dan la : ");
	tangdan(a, n);
	output(a, n);
	return 0;
}
