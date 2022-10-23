#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define Max 100

void Nhapn(int *n)
{
	do{
		printf("Nhap n : ");
		scanf("%d", &*n);
		if(*n < 0)
			printf("Nhap sai, nhap lai!");
	}while(*n < 0);
}

void RanDom(int A[], int n)
{
    int i, min = 0;
    int max = 100;
    if(n >= 0)
	{
    	A[n] = (rand()%(max - min + 1)) + min;
    	RanDom(A, n-1);
    }
}

void output(int A[], int n)
{
    int i;
    for (i = 0; i < n; i ++)
        printf("%d\t", A[i]);
}

void SelectionSort(int A[], int n)
{
	int min, i, j;
	for(i = 0;i < n-1; i++)
	{
		min = i;
		for(j = i + 1; j < n ; j++)
		{
			if (A[j ] < A[min])
				min = j;
		}
		int temp = A[min];
		A[min] = A[i];
		A[i] = temp;
	}
}

void BubbleSort(int *A, int size)
{
	int i, limit, temp;
	for (limit = size-2; limit >= 0; limit--)
	{
		for (i=0; i <= limit; i++)
		{
			if (A[i] > A[i+1])
			{
				temp = A[i];
				A[i] = A[i+1];
				A[i+1] = temp;
			}
		}
	}
}

void Nhapx(int *x)
{
	do{
		printf("\nNhap x : ");
		scanf("%d", &*x);
		if(*x < 0)
			printf("Nhap sai, nhap lai!");
	}
	while(*x < 0);
}

int SequentialSearch(int *A, int n, int x)
{
	int i;
	for(i = 0; i < n; i++)
	{
		if(A[i] == x) 
			return i;
	}
	return -1;
}

int BinarySearch(int A[], int n, int x)
{
	int left, right, mid; 
	left = 0; 
	right = n-1;
	do
	{
		mid = (left + right)/2;
		if(A[mid] == x)
		{
			return mid;
		}
		else
			if(A[mid] < x) 
				left = mid + 1;
			else 
				right = mid - 1;
	}while(left <= right);
	return -1;
}

void main()
{
	srand(time(NULL));
	int n, i, x;
	Nhapn(&n);
	int A[Max];
	RanDom(A, n);
	printf("\nMang : \n");
	output(A, n);
	printf("\nMang khi sap xep tang dan theo kieu Bubble Sort : \n");
	BubbleSort(A, n);
	output(A, n);
	printf("\nMang khi sap xep tang dan theo kieu Selection Sort : \n");
	SelectionSort(A, n);
	output(A, n);	
	Nhapx(&x);
	printf("\nTim kiem theo kieu Binary Search");
	if(BinarySearch(A, n, x) == -1)
		printf("\nKhong xuat hien");
	else	
		printf("\nXuat hien tai : %d", BinarySearch(A, n, x));
	printf("\nTim kiem theo kieu Sequential Search");
	if(SequentialSearch(A, n, x) == -1)
		printf("\nKhong xuat hien");
	else	
		printf("\nXuat hien tai : %d", SequentialSearch(A, n, x));
}
