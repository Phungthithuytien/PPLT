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

void InsertionSort(int A[], int n )
{
	int pos, i;
	int x;
	for(i = 1; i < n; i++)
	{
		x = A[i]; 
		pos = i-1;
		while((pos >= 0)&&(A[pos] > x))
		{
			A[pos+1] = A[pos];
			pos--;
		}
		A[pos+1] = x;
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
		printf("\nNhap key : ");
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

int LinearSearch(int A[], int n, int x)
{
	int i = 0;
	while((i < n)&&(A[i] != x))
	{
		i++;
	}
	if(i == n)
		return i;
	else
		return -1;
}

int main() 
{
	int A[Max], n, x, chon;
	do
	{	
		printf("\n======MENU=======");
		printf("\n1. Nhap n");
		printf("\n2. Ran Dom tao mang ");
		printf("\n3. Output mang ");
		printf("\n4. Sap xep bang Selection Sort");
		printf("\n5. Sap xep bang Insertion Sort");
		printf("\n6. Sap xep bang Bubble Sort");
		printf("\n7. Nhap key");
		printf("\n8. Tim kiem bang Sequential Search");
		printf("\n9. Tim kiem bang Binary Search");
		printf("\n10. Tim kiem bang Linear Search");
		printf("\n0. Thoat");
		printf("\nVui long chon : ");
		scanf("%d", &chon);		
		switch(chon)
		{
			case 0: printf("Hen gap lai");
				break;
			case 1: Nhapn(&n); 
				break;
			case 2: printf("\nRan dom tao mang");
				RanDom(A, n); 
				break;
			case 3: printf("\nXuat mang duoc tao : ");
				output(A, n);	
				break;
			case 4: printf("\nMang duoc xap xep bang Selection Sort : "); 
				SelectionSort(A, n);
				output(A, n);
				break;
			case 5: printf("\nMang duoc xap xep bang Insertion Sort : ");
				InsertionSort(A, n);
				output(A, n);
				break;
			case 6: printf("\nMang duoc xap xep bang Bubble Sort : "); 
				BubbleSort(A, n);
				output(A, n);
				break;
			case 7: Nhapx(&x);
				break;	
			case 8: printf("\nKey duoc tim kiem bang Sequential Search : "); 
				if(SequentialSearch(A, n, x) == -1)
					printf("\nKhong xuat hien");
				else	
					printf("\nXuat hien tai : %d", SequentialSearch(A, n, x));
				break;
			case 9: printf("\nMang duoc xap xep bang Binary Search : "); 
				if(BinarySearch(A, n, x) == -1)
					printf("\nKhong xuat hien");
				else	
					printf("\nXuat hien tai : %d", BinarySearch(A, n, x));
				break;
			case 10: printf("\nMang duoc xap xep bang Linear Search "); 
				if(LinearSearch(A, n, x) == -1)
					printf("\nKhong xuat hien");
				else	
					printf("\nXuat hien tai : %d", LinearSearch(A, n, x));
				break;				
			default: printf("chon sai, vui long chon lai\n");
		}
	}while(chon != 0);
	return 0;
}




