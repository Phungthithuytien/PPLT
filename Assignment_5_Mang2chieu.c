#include<stdio.h>
#include<stdbool.h>
#define MAX 100
void nhapn(int *m, int *n)
{
	do
	{
		printf("Nhap so dong:");
		scanf("%d",&*m);
		printf("Nhap so cot:");
		scanf("%d",&*n);
		if(*m<=0 || *m>100 ||*n<=0 || *n>100)
			printf("Sai..nhap lai");
	}
	while(*m<=0 || *m>100 ||*n<=0 || *n>100);
}
void input(int a[][MAX], int m, int n)
{
	int i,j;
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("Nhap phan thu thu a[%d,%d]:",i,j);
			scanf("%d",&a[i][j]);	
		}
	}
}
void output(int a[][MAX], int m, int n)
{
	int i,j;
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d\t",a[i][j]);			
		}
		printf("\n");
	}
}
void dempt(int a[][MAX], int m, int n, int x)
{
	int i, j, dem=0;
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			if(a[i][j]<x)
				dem=dem+1;	
		}
	}	
	printf("%d", dem);
}
bool laSNT(int k)
{
	if(k<2)
		return false;
	int i;
	for(i=2; i<k; i++)
	{
		if(k%i==0)
			return false;
	}
	return true;
}
void lkSNT(int a[][MAX], int m, int n)
{
	int i, j, d;
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			if(laSNT(a[i][j]))
				printf("%d\t", a[i][j]);
		}
	}	
}
int timmax(int a[][MAX], int m, int n)
{
	int i, j, max=a[0][0];
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			if(a[i][j]>max)
				max=a[i][j];	
		}
	}	
	return max;
}
bool tontaiam(int a[][MAX], int m, int n)
{
	int i, j;
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			if(a[i][j] < 0)
				return true;	
		}
	}	
	return false;
}
void tongtungdong(int a[][MAX], int m, int n)
{
	int i, j, s = 0;
	for(i=0; i<m; i++)
	{
		s=0;
		for(j=0; j<n; j++)
		{
			s = s+a[i][j];
		}
		printf("\nTong dong %d = %d", i, s);		
	}
}
int tonglonnhat(int a[][MAX], int m, int n)
{
	int i, j, s = 0, max=0;
	for(i=0; i<m; i++)
	{
		s=0;
		for(j=0; j<n; j++)
		{
			s = s+a[i][j];
			if(s>max)
				max = s;
		}	
	}
	return max;
}
int donglonnhat(int a[][MAX], int m, int n)
{
	int i, j, s = 0, max=0;
	for(i=0; i<m; i++)
	{
		s=0;
		for(j=0; j<n; j++)
		{
			s = s+a[i][j];
			if(s==tonglonnhat(a, m, n))
				return i;
		}	
	}
}
int main()
{
	int m, n, x;
	int a[MAX][MAX];
	nhapn(&m, &n);
	input(a,m,n);
	printf("\nMang 2 chieu:\n");
	output(a,m,n);
	printf("\nNhap x = ");
	scanf("%d",&x);
	printf("\nSo phan tu nho hon x la : ");
	dempt(a, m, n, x);
	printf("\nCac so nguyen to co trong mang la : \n");
	lkSNT(a, m, n);
	printf("\nSo lon nhat trong mang la : %d", timmax(a, m, n));
	if(tontaiam(a, m, n)==true)
		printf("\nMang co ton ton tai so am.");
	else
		printf("\nMang khong ton ton tai am.");
	printf("\nTong tung dong trong mang la :");
	tongtungdong(a, m, n);
	printf("\nTong tung dong lon nhat trong mang la : %d", tonglonnhat(a, m, n));
	printf("\nDong co tong lon nhat trong mang la : %d", donglonnhat(a, m, n));
	return 0;
}
