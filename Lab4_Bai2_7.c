#include <stdio.h>
#define Max 100
void nhapn(int *n)
{
	do
	{
		printf("Nhap n : ");
		scanf("%d", &*n);
		if(*n<=0 || *n>100)
			printf("Nhap sai, moi nhap lai : "); 
	} while(*n<=0 || *n>100);
}
void input(int a[], int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("\nNhap gia tri phan tu thu a[%d] = ", i);
		scanf("%d", &a[i]); 
	} 
} 
void output(int a[], int n)
{
	int i;
	for(i=0;i<n; i++)
	{
		printf("%d\t",a[i]);
	}
}
int timmax(int a[], int n)
{
	int i, max=a[0];
	for(i=0; i<n; i++)
	{
		if(a[i]>max)
			max=a[i];	
	}	
	return max;
}
int timmin(int a[],int n)
{
	int i, min=a[0];
	for(i=0; i<n; i++)
	{
		if(a[i]<min)
			min=a[i];	
	}	
	return min;
}
int tongmang(int a[], int n)
{
	int i, s = 0;
	for(i=0; i<n; i++)
	{
		s = s+a[i];
	}
	return s; 
}
int tongam(int a[], int n)
{
	int i, s = 0;
	for(i=0; i<n; i++)
	{
		if(a[i]<0)
		{
			s = s+a[i];
		}	
	}
	return s; 
}
int tongchan(int a[], int n)
{
	int i, s = 0;
	for(i=0; i<n; i++)
	{
		if(a[i]%2==0)
			s = s+a[i];
	}
	return s; 
}
void daonguoc(int a[], int n)
{
	int i, j, x = n, the;
	for(i=n-1; i>=0; i--)
	{
		printf("%d\t", a[i]);
	}
}
int main()
{
	int n, x;
	int a[Max];
	nhapn(&n);
	input(a, n);
	printf("\nMang 1 chieu:\n");
	output(a, n);
	printf("\nCau 2");
	printf("\nSo lon nhat trong mang la : %d", timmax(a, n));
	printf("\nCau 3");
	printf("\nSo nho nhat trong mang la : %d", timmin(a, n));
	printf("\nCau 4");
	printf("\nTong cac phan tu trong mang la : %d", tongmang(a, n));
	printf("\nCau 5");
	printf("\nTong cac phan tu am trong mang la : %d", tongam(a, n));
	printf("\nCau 6");
	printf("\nTong cac phan tu chan trong mang la : %d", tongchan(a, n));
	printf("\nCau 7");
	printf("\nMang dao nguoc la :\n");
	daonguoc(a, n);
}

