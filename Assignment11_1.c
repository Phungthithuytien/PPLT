#include<stdio.h>
#define MAX 300

typedef struct
{
	char id[10];
	char name[20];
	char gender[7];
	int age;
	char dep[5];
	char country[20];	
}EMP;

EMP input()
{
	EMP temp;
	printf("Nhap ID : ");
	scanf("%s", &temp.id);
	printf("Nhap name : ");
	scanf("%s", &temp.name);
	printf("Nhap gender : ");
	scanf("%s", &temp.gender);
	printf("Nhap age : ");
	scanf("%d", &temp.age);
	printf("Nhap dep : ");
	scanf("%s", &temp.dep);
	printf("Nhap country : ");
	scanf("%s", &temp.country);
	return temp;
}

void output(EMP e)
{
	printf("ID = %s\n", e.id);	
	printf("Name = %s\n", e.name);	
	printf("Gender = %s\n", e.gender);	
	printf("Age = %d\n", e.age);	
	printf("Dep = %s\n", e.dep);	
	printf("Country = %s\n", e.country);	
}

int inputn()
{
	int temp;
	printf("Number : ");
	scanf("%d", &temp);
	return temp;
}

void inputs(EMP a[], int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("Nhap thong tin EMp thu %d\n", i + 1);
		a[i] = input();		
	}
}

void outputs(EMP a[], int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("\nThong tin Emp thu %d\n", i + 1);
		output(a[i]);		
	}
}

int main()
{
	printf("Struct\n");
	EMP a[MAX];
	int n;
	n = inputn();
	inputs(a, n);
	printf("\nList Emp : \n");
	outputs(a, n);
	return 0;
}
