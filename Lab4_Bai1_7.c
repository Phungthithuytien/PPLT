#include <stdio.h>
#define Max 100
void nhapn(int *m, int *n)
{
	do
	{
		printf("Nhap so dong : ");
		scanf("%d", &*m);
		printf("Nhap so cot: ");
		scanf("%d", &*n);
		if(*m<=0 || *m>100 || *n<=0 || *n>100)
			printf("Nhap sai, moi nhap lai : "); 
	} while(*m<=0 || *m>100 || *n<=0 || *n>100);
}
void input(int a[][Max], int m, int n)
{
	int i, j;
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++) 
		{
			printf("\nNhap gia tri phan tu thu a[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]); 
		}
	} 
} 
void output(int a[][Max], int m, int n)
{
	int i, j;
	for(i = 0; i<m; i++)
	{
		for(j = 0; j<n; j++) 
		{
			printf("%d\t", a[i][j]); 
		}
	} 
	printf("\n"); 
} 
int timmax(int a[][Max], int m, int n)
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
int timmin(int a[][Max], int m, int n)
{
	int i, j, min=a[0][0];
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			if(a[i][j]<min)
				min=a[i][j];	
		}
	}	
	return min;
}
int tongmang(int a[][Max], int m, int n)
{
	int i, j, s = 0;
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			s = s+a[i][j];
		}	
	}
	return s; 
}
int tongam(int a[][Max], int m, int n)
{
	int i, j, s = 0;
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			if(a[i][j]<0)
			{
				s = s+a[i][j];
			}
		}	
	}
	return s; 
}
int tongchan(int a[][Max], int m, int n)
{
	int i, j, s = 0;
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			if(a[i][j]%2==0)
			{
				s = s+a[i][j];
			}
		}	
	}
	return s; 
}
void daonguoc(int a[][Max], int m, int n)
{
	int i, j, x = n, the;
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			while(x>=n/2)
			{
				the = a[n-x];
				a[]
				
			}
		}	
	}
}
int main()
{
	int m, n, x;
	int a[Max][Max];
	nhapn(&m, &n);
	input(a,m,n);
	printf("\nMang 2 chieu:\n");
	output(a,m,n);
	printf("\nCau 2");
	printf("\nSo lon nhat trong mang la : %d", timmax(a, m, n));
	printf("\nCau 3");
	printf("\nSo nho nhat trong mang la : %d", timmin(a, m, n));
	printf("\nCau 4");
	printf("\nTong cac phan tu trong mang la : %d", tongmang(a, m, n));
	printf("\nCau 5");
	printf("\nTong cac phan tu am trong mang la : %d", tongam(a, m, n));
	printf("\nCau 6");
	printf("\nTong cac phan tu chan trong mang la : %d", tongchan(a, m, n));
	printf("\nCau 7");
	
}
















