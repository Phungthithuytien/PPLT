#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define Max 100

void nhapn(int *n)
{
	do{
		printf("Nhap n : ");
		scanf("%d", &*n);
		if(*n < 0)
			printf("Nhap sai, nhap lai!");
	}while(*n < 0);
}
	
void TaoMangR(int A[], int n)
{
	int i;
	if (n > 0)
	{
		A[i] = rand() % 100;
		for (i = 1; i < n; i++)
		{
			A[i] = A[i - 1] + rand() % 100;
		}
	}	
}

void XuatLtoR(int A[], int n)
{
	int i;
    for (i = 0; i < n; i++)
	{
        printf("%d\t", A[n]);
    }
}

int main()
{
    int A[Max], n;
    nhap(&n);
    TaoMangR(A, n);
    printf("\nMang duoc tao ra la: ");
    XuatLtoR(A, n);
    return 0;
}
