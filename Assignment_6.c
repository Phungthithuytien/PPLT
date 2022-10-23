#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define Max 100
void nhapmn(int *n)
{
	do
	{
		printf("Nhap so dong/cot : ");
		scanf("%d",&*n);	
		if(*n<=0 || *n>Max)
			printf("Nhap sai, moi nhap lai : \n");
	}
	while(*n<=0 || *n>Max);
}
void input(int a[][Max], int n)
{
	int i,j, min=0, max=9;
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			a[i][j]=(rand()%(max-min+1))+min;	
		}
	}
}
void output(int a[][Max],int n)
{
	int i,j;
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d\t",a[i][j]);			
		}
		printf("\n");
	}
}
bool ktrasnt(int k)
{
	int i;
	if(k<2)
		return false;
	for(i=2; i<k; i++)
	{
		if(k%i==0)
			return false;
	}
	return true;
}
int sntcheophu(int a[][Max], int n)
{
	int i, j, dem = 0;
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if((i+j) == (n-1))
			{
				if(ktrasnt(a[i][j]))
					dem++;	
			}	
		}
	}	
	return dem;
}
void lktamgiacd(int a[][Max],int n)
{
	int i,j;
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(i>=j)
			{
				printf("%d\t", a[i][j]);		
			}
		}
		printf("\n");
	}
}
int timmax(int a[][Max], int n)
{
	int i=0, j, max = a[0][0];
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(a[i][j]>max)
			{
				max = a[i][j];
			}	
		}
	}	
	return max;
}
int maxchancheophu(int a[][Max], int n)
{
	int i, j, max = a[0][j];
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if((i+j) == (n-1))
			{
				if(a[i][j]>max)
					max = a[i][j];
			}
		}
	}	
	return max;
}
void maxtungdong(int a[][Max], int n)
{
	int i=0, j;
	for(i=0; i<n; i++)
	{
		int max = a[i][0];
		for(j=0; j<n; j++)
		{
			if(a[i][j]>max)
			{
				max = a[i][j];
			}	
		}
		printf("Max dong thu %d la %d\n", i, max);
	}	
}
int tongvtchan(int a[][Max], int n)
{
	int i, j, tong = 0;
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if((i+j)%2==0)
				tong += a[i][j];
		}
	}	
	return tong;
}
int tongtamgiactrenchinh(int a[][Max], int n)
{
	int i, j, tong = 0;
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(i<j)
				tong += a[i][j];
		}
	}	
	return tong;
}
int tongtamgiacduoiphu(int a[][Max], int n)
{
	int i, j, tong = 0;
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(i+j>n-1)
				tong += a[i][j];
		}
	}	
	return tong;
}
int vitrix(int a[][Max], int n, int x)
{
	int i, j;
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(a[i][j] == x)  
				return i;
		}
	}	
	return -1;
}
void vitrimax(int a[][Max], int n)
{
	int i=0, j, max = a[0][0];
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(a[i][j]>max)
				max = a[i][j];
		}
	}
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(a[i][j] == max)
				printf("\nVi tri cua gia tri lon nhat %d nam o dong %d cot %d", a[i][j], i, j);	
		}
	}	
}
int main()
{
	int n, x;
	int a[Max][Max];
	nhapmn(&n);	
	input(a,n);
	printf("\nMang 2 chieu:\n");
	output(a,n);
	printf("\nCo %d so nguyen to tren duong cheo phu.", sntcheophu(a, n));
	printf("\nCac phan tu thuoc cheo chinh va tam giac duoi la : \n");
	lktamgiacd(a, n);
	printf("\nPhan tu lon nhat trong mang la : %d", timmax(a, n));
	printf("\nPhan tu lon nhat tren duong cheo phu la : %d", maxchancheophu(a, n));
	printf("\n");
	maxtungdong(a, n);
	printf("\nTong cac vi tri mau xanh trong mang la : %d", tongvtchan(a, n));
	printf("\nTong tam giac tren duong cheo chinh la : %d", tongtamgiactrenchinh(a, n));
	printf("\nTong tam giac duoi duong cheo phu la : %d", tongtamgiacduoiphu(a, n));
	printf("\nNhap gia tri can tim vi tri : ");
	scanf("%d", &x);
	printf("Phan tu co gia tri bang %d nam o dong %d\n", x, vitrix(a, n, x));
	vitrimax(a, n);
	return 0;
}
