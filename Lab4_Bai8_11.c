#include<stdio.h>
#define MAX 100
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
void xoavt(int a[], int *n, int k)
{
	int i;
	for(i=k; i<*n-1; i++)
	{
		a[i]=a[i+1];
	}	
	*n =*n-1; 
} 

int timmin(int a[], int n)
{
	int i, Min = a[0];
	for(i=0; i<n; i++)
	{
		if(a[i]<Min)
			Min = a[i];		
	}
	return Min;
}
int timmax(int a[], int n)
{
	int i, Max = a[0];
	for(i=0; i<n; i++)
	{
		if(a[i] > Max)
			Max = a[i];		
	}
	return Max;
}
void laplai(int a[], int n)
{
	int i, x, t = 0;
	for(x = timmin(a,n); x <= timmax(a,n); x++)
	{
		int dem = 0;
		for(i=0; i<n; i++)
		{
			if(a[i]==x)
				dem++;
		}
		if(dem>0)
		{
			printf("\n%d xuat hien %d lan", x, dem);
			t = t+(dem-1);
		}		
	}
	printf("\nCo %d phan tu lap lai.", t);
}
void xoa(int a[], int *n, int vt)
{
	int i;
	for(i=vt; i<*n-1; i++)
	{
		a[i]=a[i+1];
	}	
	*n =*n-1; 
} 
void xoalaplai(int a[], int *n)
{
	int i, j, the;
	for(i = 0; i < *n - 1; i++)
	{
        for(j = i + 1; j < *n; j++)
		{
            if(a[i] > a[j])
			{
                the = a[i];
                a[i] = a[j];
                a[j] = the;        
            }
        }
    }
    for(i = 0; i < *n - 1; i++)
	{
		if(a[i] = a[i+1])
			xoavt(a, &*n, i+1);
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
	printf("\n\nNhap vi tri can xoa : ");
	scanf("%d", &k);
	printf("Mang khi xoa vi tri %d la :\n", k);
	xoavt(a,&n,k);
	output(a,n);
	printf("\n");
	laplai(a,n);
	printf("\nMang sau khi xoa cac phan tu lap lai la :\n");
	xoalaplai(a,&n);
	output(a,n);
	return 0;
}
