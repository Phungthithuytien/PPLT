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
	for(i=0; i<n; i++)
	{
		printf("%d\t", a[i]);
	}
}
void nhapm(int *m)
{
	do
	{
		printf("\n\nNhap m : ");
		scanf("%d", &*m);
		if(*m<=0 || *m>100)
			printf("Nhap sai, moi nhap lai : "); 
	} while(*m<=0 || *m>100);
}
void input2(int b[], int m)
{
	int j;
	for(j=0; j<m; j++)
	{
		printf("\nNhap gia tri phan tu thu b[%d] = ", j);
		scanf("%d", &b[j]); 
	} 
} 
void output2(int b[], int m)
{
	int j;
	for(j=0; j<m; j++)
	{
		printf("%d\t",b[j]);
	}
}
void tronmang(int c[], int a[], int b[], int n, int m)
{
	int i, j, k=0;
	for(i = 0; i < n; i++)
    {
        c[k] = a[i];
        k++;
    }
    k = n;
    for(j = 0; j < m; j++)
    {
        c[k] = b[j];
        k++;
    }
    printf("\n\nMang tron la: \n");
    for(i = 0; i < k; i++)
    {
        printf("\t %d ", c[i]);
    }
}
int main()
{
    int a[Max], b[Max], c[Max];
    int i, j, n , m;
    nhapn(&n);
	input(a, n);
	printf("\nMang 1 chieu thu nhat :");
	output(a, n);
	nhapm(&m);
	input2(b, m);
	printf("\nMang 1 chieu thu hai :");
	output2(b, m);
	tronmang(c, a, b, n, m);
    return 0;
}
