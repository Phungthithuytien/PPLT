#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100
void taomangngaunhien(int arr[][MAX],int n)
{    
    srand((unsigned int) time (NULL));
    int i,j,temp=0,min=-10,max=10;
    for (i=0;i<n;i++){
    for(j=0;j<n;j++){
        arr[i][j]=(rand()%(max-min+1))+min;
    }
    }
}
void output(int arr[][MAX],int n,FILE *f){
  int i,j;
    for(i=0;i<n;i++)
    {    
    fprintf(f,"\n");    
    for(j=0;j<n;j++){
      fprintf(f, "%d \t",arr[i][j]);
    }
    }
}
int read (int a[][MAX],int *n)
{
    FILE *f;
    int i,j;
    f = fopen ("matran.txt","r");
    if (f == NULL)
    {
        return 0;
    }
    else 
    {
        for (i=0;i<*n;i++)
        {
            for (j=0;j<*n;j++)
            {
                fscanf (f,"%d",a[i][j]);
            }
        }
        fclose (f);
        return 1;
    }
} 
int max(int arr[][MAX],int n)
{
    int max;
    int i,j;
    max = arr[0][0];
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            if(max<arr[i][j])
            {
                max=arr[i][j];
            }
        }
    }
    return max;
}
int min(int arr[][MAX],int n)
{
    int min;
    int i,j;
    min = arr[0][0];
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            if(min>arr[i][j])
            {
                min=arr[i][j];
            }
        }
    }
    return min;
}
int sum_row (int a[][MAX],int n,int x)
{
    int j;
    int sum=0;
    for (j=0;j<n;j++)
    {
        sum += a[x][j];
    }
    return sum;
}
int max_row (int a[][MAX],int n)
{
    int max,i;
    max = sum_row (a,n,0);
    for (i=1;i<n;i++)
    {
        if ( sum_row (a,n,i) > max )
        {
            max = sum_row (a,n,i);
        }
    }
    for (i=0;i<n;i++);
    {
        if (sum_row (a,n,i)==max )
        {
            printf ("%d ",i);
        }
    }
}
int main() 
{
  	FILE *f;
  	f = fopen("matran.txt", "w");
	int row, col, arr[MAX][MAX],n,l=0;
	printf("Moi nhap so dong va so cot:");
	scanf("%d\n",&n);
  	taomangngaunhien(arr, n);
  	l = n;
  	fprintf(f, "Ma tran cap : %d", l);
  	output(arr,n,f);
  	if (read(arr,&n)==0)
    {
        printf ("loi tap tin");
    }
    else 
    {
        printf ("phan tu lon nhat trong ma tran la : %d",max(arr,n));
        printf ("\nphan tu nho nhat trong ma tran la : %d",min(arr,n));
        printf ("\ndong co tong lon nhat la : %d", max_row(arr,n));
    }
    return 0;
}                                                       
