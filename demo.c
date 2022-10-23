#include<stdio.h>
#include<stdbool.h>
#define MAX 20
void input(int a[], int n)
{
	int i;
	for(i=0;i<n; i++)
	{
		printf("nhap gia tri cho phan tu a[%d]:",i);
		scanf("%d",&a[i]);
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
	int i;
	int m=a[0];
	for(i=1;i<n; i++)
	{
		if(a[i]>m)
			m=a[i];
	}
	return m;
}
int timledau(int a[], int n)
{
	int i;
	for(i=1;i<n; i++)
	{
		if(a[i]%2!=0)
			return a[i];
	}
	return 0;
}
int timlemax(int a[], int n)
{
	int i;
	int m=timledau(a,n);
	if(m==0)
		return 0;
	for(i=1;i<n; i++)
	{
		if(a[i]>m && a[i]%2!=0)
			m=a[i];
	}
	return m;
	
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
		if(laSNT(a[i])) //==true
			return a[i];
	}
	return 0;	
}
void lkSNT(int a[], int n)
{
	int i;
	for(i=0;i<n; i++)
	{
		if(laSNT(a[i]))
			printf("%d\t", a[i]);
	}
}
int tongchan(int a[], int n)
{
	int i, s=0;
	for(i=0;i<n; i++)
	{
		if(a[i]%2==0)
			s+=a[i];
	}
	return s;
}

bool doixung(int a[], int n)
{
	int i;
	for(i=0;i<n; i++)
	{
		if(a[i]!=a[n-1-i])
			return false;	
	}
	return true;
}
bool tangdan(int a[], int n)
{
	int i;
	for(i=0;i<n-1; i++) //luu y <n-1
	{
		if(a[i]>a[i+1])
			return false;	
	}
	return true;

}
void cucdai(int a[], int n)
{
	int i;
	if(a[0]>a[1])
		printf("%d\t",a[0]);
	for(i=1;i<n-1; i++) // luu y <n-1
	{
		if(a[i]>a[i-1] && a[i]>a[i+1])
			printf("%d\t", a[i]);	
	}
	if(a[n-1]>a[n-2])
		printf("%d\t",a[n-1]);
}
int demlonhonx(int a[], int n, int x)
{
	int i, d=0;
	for(i=0;i<n-1; i++) //luu y <n-1
	{
		if(a[i]>x)
			d++;
	}
	return d;
}
int main()
{
	int n;	
	int a[MAX];
	do
	{
		printf("nhap n (>0):");
		scanf("%d",&n);
		if(n<=0 || n>MAX)
			printf("sai. nhap lai\n");
	}while(n<=0|| n>MAX);
	input(a,n);
	printf("\nMang vua nhap:");
	output(a,n);
	/*printf("\nCau 1:So max trong mang la %d",timmax(a,n));
	printf("\nCau 2:");
	if(timlemax(a,n)==0)
		printf("ko co so le");
	else
		printf("So max le trong mang la %d",timlemax(a,n));
	printf("\nCau32:");
	if(timSNTcuoi(a,n)==0)
		printf("ko co so NT");
	else
		printf("So NT cuoi cung trong mang la %d",timSNTcuoi(a,n));
	*/
	printf("\nCau doi xung:");
	if(doixung(a,n))
		printf("Mang doi xung");
	else
		printf("Mang ko doi xung");
	printf("\nCau..."); cucdai(a,n);
	int x;
	printf("\nnhap x:");
	scanf("%d",&x);
	printf("Co %d phan tu lon hon %d",demlonhonx(a,n,x),x);
	return 0;
}
