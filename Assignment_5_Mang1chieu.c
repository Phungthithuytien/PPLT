#include<stdio.h>
#include<stdbool.h>
#define MAX 20
void nhapn(int *n)
{
	do
	{
		printf("Nhap n:");
		scanf("%d",&*n);
		if(*n<=0 || *n>20 || *n%2==0)
			printf("Sai..nhap lai");
	}
	while(*n<=0 || *n>100 || *n%2==0);
}
void input(int a[], int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("\nNhap phan thu thu a[%d] : ", i);
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
bool ktrale(int a[], int n)
{
	int i;
	for(i = 0; i < n-2; i++)
	{
		if(a[i]%2!=0)
			return true;	
	}
	return false;
}
bool ktratong(int a[], int n)
{
	int i;
	for(i = 0; i < n-2; i++)
	{
		if(a[i]+a[i+1]!=a[i+2])
			return false;
	}
	return true;
}
void themx(int a[], int *n, int x, int vt)
{
	int i;
	for(i=*n;i>vt; i--)
	{
		a[i]=a[i-1];
	}
	a[vt]=x;
	*n =*n+1; 
}
void giamdan(int a[], int n)
{
	int i, j, the;
	for(i = 0; i < n - 1; i++)
	{
        for(j = i + 1; j < n; j++)
		{
            if(a[i] < a[j])
			{
                the = a[i];
                a[i] = a[j];
                a[j] = the;        
            }
        }
    }
}
void xoax(int a[], int *n, int vt)
{
	int i;
	for(i=vt; i<*n-1; i++)
	{
		a[i]=a[i+1];
	}	
	*n =*n-1; 
} 
void xoalonhonx(int a[], int *n, int x)
{
	int i;	
	for(i=*n-1; i>=0; i--)
	{	if(a[i]>x)
		{
			xoax(a,&*n,i);
		}
	}
}
int main()
{
	int n, k;
	int a[MAX];
	nhapn(&n);
	input(a,n);
	printf("\nMang :");
	output(a,n);
	if(ktrale(a, n)==true)
		printf("\nMang co ton ton tai so le.");
	else
		printf("\nMang khong ton ton tai le.");
	if(ktratong(a, n)==true)
		printf("\nMang thoa dieu kien tong 2 so truoc bang so sau.");
	else
		printf("\nMang khong thoa dieu kien tong 2 so truoc bang so sau.");
	int x;
	printf("\nNhap so muon them vao x = ");
	scanf("%d",&x);
	printf("\nNhap vi tri can them vao k = ");
	scanf("%d", &k);
	printf("\nTa duoc mang : \n");
	themx(a, &n, x, k-1);
	output(a,n);
	printf("\nMang sap xe theo kieu giam dan : \n");
	giamdan(a,n);
	output(a,n);
	printf("\nMang khi xoa phan tu lon hon x : \n");
	xoalonhonx(a,&n,x);
	output(a,n);
	return 0;
}
