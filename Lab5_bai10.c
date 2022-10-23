#include<stdio.h>
#include<string.h>
#define MAX 50
void nhapn(int *n,int i);
void chen(int n,char c1[],char c2[]);
void main(){
	int n;
	char c1[MAX],c2[MAX];
	printf("Nhap chuoi 1:");
	fflush(stdin);
	fgets(c1, sizeof(c1), stdin);
	printf("Nhap chuoi 2:");
	fflush(stdin);
	fgets(c2, sizeof(c2), stdin);
	int i=strlen(c1)-1;
	nhapn(&n,i);
	chen(n,c1,c2);
}
void nhapn(int *n,int i){
	do
	{
		printf("Nhap n:");
		scanf("%d", &*n);
		if(*n>i)
			printf("Nhap sai, hay nhap lai.\n");
	}
	while(*n>i);
}
void chen(int n,char c1[],char c2[]){
	c1[n-1]='\0';
	strcat(c1,c2);
	printf("\nKet qua sau khi noi chuoi la:\n");
	puts(c1);
}