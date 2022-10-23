#include<stdio.h>
#define MAX 10
#include<stdbool.h>
void input(int a[], int n)
{
	int i;
	for(i=0;i<n; i++)
	{
		do
	{
		printf("Nhap gia tri cho phan tu a[%d]:",i);
		scanf("%d",&a[i]);
		if(a[i]<-10 || a[i]>10)
			printf("Nhap sai, nham lai: \n");
	}while(a[i]<-10 || a[i]>10);
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
int timSNTcuoi(int a[], int n)
{
	int i;
	for(i=n-1; i>=0; i--)
	{
		if(laSNT(a[i]))
			return a[i];
	}
	return 0;	
}
int tongsochan(int a[], int n)
{
	int i, tong=0;
	for(i=2; i<=n; i=i+2)
	{
		if(a[i]%2==0)
			tong=tong+a[i];
	}
	return tong;	
}
int timmax(int a[], int n)
{
	int i;
	int m=a[0];
	for(i=1;i<n; i++)
	{
		if(a[i]>m)
			m=a[i];
	}
	return m;
}
int vitriSNT(int a[], int n)
{
	int i, tongSNT=0;
	for(i=2; i<=n; i++)
	{
		if(laSNT(i))
			tongSNT+=a[i];
	}
	return tongSNT;	
}
int timsoamcuoi(int a[], int n)
{
	int i;
	for(i=n-1; i>=0; i--)
	{
		if(a[i]<0)
			return a[i];
	}
	return 0;	
}
int nhohonx(int a[], int n, int x)
{
	int i, d=0;
	for(i=0;i<=n-1; i++) 
	{
		if(a[i]<x)
			d++;
	}
	return d;
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
int demsoam(int a[], int n)
{
	int i, d=0;
	for(i=0;i<=n-1; i++) 
	{
		if(a[i]<0)
			d++;
	}
	if(d>=2)
		return true;
	else
		return false;
}
void innvitriSNT(int a[], int n)
{
	int i;
	for(i=2; i<n; i++)
	{
		if(laSNT(i))
			printf("\t %d", a[i]);
	}	
}
bool ktrachan(int k)
{
	if(k%2==0)
		return true;
	else
		return false;
}
int tongchan(int a[], int n)
{
	int i, j, t = 0;
	for(i=0; i<n; i++)
	{
		if(ktrachan(a[i]))
		{
			for(j=1; j<=a[i]; j++)
			{
				if(a[i]%j==0)
					t=t+j;
			}	
		}
	}
	return t;	
}
void lknhohonx(int a[], int n, int x)
{
	int i;
	for(i=0;i<=n-1; i++) 
	{
		if(a[i]<x)
			printf("\t%d", a[i]);
	}
}
void tangdanx(int a[], int n, int x)
{
	int i, j, the;
	for(i = 0; i < n ; i++)
	{
		if(a[i]<x)
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
        	printf("\t %d", a[i]);
    	}
	}
}
bool ktrakecuoi(int a[], int n)
{
	if(a[n-2]<0)
		return true;
	else
		return false;
}
int main()
{
	int n, i;	
	int a[MAX];
	do
	{
		printf("Nhap so phan tu cho mang (0<n<10):");
		scanf("%d",&n);
		if(n<=0 || n>MAX)
			printf("Nhap sai, nham lai: \n");
	}while(n<=0|| n>MAX);
	input(a,n);
	printf("\nCau 1,");
	printf("\nMang vua nhap la : ");
	output(a,n);
	printf("\nCau2,");
	if(timSNTcuoi(a,n)==0)
		printf("\nKhong co so nguyen to");
	else
		printf("\nSo nguyen to cuoi cung trong mang la : %d",timSNTcuoi(a,n));
	printf("\nCau3,");
	printf("\nTong cac so chan tai vi tri chan la: %d", tongsochan(a,n));
	printf("\nCau4,");
	printf("\nMax la: %d", timmax(a,n));
	printf("\nCau6,");
	printf("\nTong cac so tai vi tri so nguyen to la: %d", vitriSNT(a,n));
	printf("\nCau7,");
	if(timsoamcuoi(a,n)==0)
		printf("\nKhong co so am");
	else
		printf("\nSo am cuoi cung trong mang la : %d",timsoamcuoi(a,n));
	printf("\nCau 8,");
	int x;
	printf("\nNhap x:");
	scanf("%d",&x);
	printf("Co %d phan tu nho hon %d",nhohonx(a, n, x),x);
	printf("\nCau 9,");
	tangdan(a, n);
	printf("\nMang da sap xep la: ");
	output(a,n);
	printf("\nCau11,");
	if(demsoam(a,n)==true)
		printf("\nCo ton tai tren 2 so am");
	else
		printf("\nKhong ton tai tren hai so am");
	printf("\nCau12,");
	printf("\nCac so nam o vi tri so nguyen to la : ");
	innvitriSNT(a, n);
	printf("\nCau13,");
	printf("\nTong cac uoc so cua phan tu chan trong mang la : %d", tongchan(a, n));
	printf("\nCau 14,");
	printf("\nCac so nho hon %d la : ", x);
	lknhohonx(a, n, x);
	printf("\nCau 15,");
	printf("\nCac so nho hon %d theo thu tu tang dan la :  ", x);
	tangdanx(a, n, x); 
	printf("\nCau 16 ");
	output(a,n);
	if(ktrakecuoi(a,n))
		printf("\nCo ton tai so am ke cuoi");
	else
		printf("\nKhong ton tai so am ke cuoi");
	return 0;
}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
