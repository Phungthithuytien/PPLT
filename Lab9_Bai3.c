#include<stdio.h>
#include<string.h>
#define MAX 100

int SequentialSearch(char str[], int length, char k)
{  
    int i;
	for(i = 0; i < length; i++)
	{
	    if(str[i] == k)
		{
		    return i;
		}
	}
    return -1;
}

void SelectionSort(char str[], int length)
{
    int i, j, temp, min;
	for(i = 0; i < length - 1; i++)
	{
		min = i;
	    for(j = i + 1; j < length; j++)
		{
		    if(str[j] < str[min])
			{
				min = j;
			}
		}
	    temp = str[min];
		str[min] = str[i];
	 	str[i] = temp;
	}
} 

int BinarySearch(char str[], int length, char k)
{
    int mid, left = 0, right = length - 1;
	mid = (left + right)/2;
	do
	{
		mid = (left + right)/2;
	    if(k == str[mid])
	    {
	        return mid;
	    }
	    else if(k > str[mid])
	    {
		    left = mid + 1;
	    }
	    else
	    { 
		    right = mid - 1;
	    }
	}
	while(left<=right);
	return -1;
}

int main()
{
	char str[MAX];
	int i;
    printf("Enter a filename : ");
	FILE *fo;
	char *inra;
    inra = "chuoi.txt";
	fo = fopen(inra, "r");
	if(fo != NULL)
	{
	    fgets(str, MAX, fo);
	}
	fclose(fo);
	int length = strlen(str);
	printf("\nChuoi : ");
	for(i = 0; i < length; i++)
	{
	    printf("%c", str[i]);
	}
	char key;
	printf("\nEnter the key : ");
	scanf("%c", &key);
    int choose;
	do
	{
		printf("\nMenu of the algorithms");
		printf("\n1. Search theo sequential search");
		printf("\n2. Search theo binary search");
		printf("\n3. Exit");
		printf("\nChoose one of these search program : ");
		scanf("%d", &choose);
		switch(choose)
		{
			case 1: 
				if(SequentialSearch(str, length, key) == -1)
				{
					printf("\nKhong tim thay");
				}
				else
				{
					printf("\nKey tai vi tri : %d",SequentialSearch(str, length, key));
				}
				break;
				
			case 2:
				SelectionSort(str, length);
				printf("Chuoi sau khi sap xep : ");
				for(i = 0; i < length; i++)
				{
					printf("%c",str[i]);
				}
				if(BinarySearch(str, length, key) == -1)
				{
					printf("\nKhong tim thay");
				}
				else
				{
					printf("\nKey tai vi tri: %d",BinarySearch(str, length, key));
				}
				break;
				
			case 3:
			    return 0;
				
			default: printf("Chon sai, vui long chon lai\n");
		}
	}
	while(choose != 0);
	return 0;
}
