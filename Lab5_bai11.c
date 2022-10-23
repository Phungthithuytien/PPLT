#include<stdio.h>
#include<string.h>
#define MAX 50
void nhapn(int *n,int p);
void xoa(int k,int n,int p,char s[]);
void main()
{
	char s[MAX];
	printf("Nhap chuoi: ");
	fgets(s, sizeof(s), stdin);
	fflush(stdin);
	int i=strlen(s)-1;
	int n,p;
	printf("Vi tri:");
	nhapn(&p,i);
	printf("So ki tu xoa:");
	nhapn(&n,i-p);
	xoa(i,n,p,s);
}
void nhapn(int *n,int p){
	do
	{
		printf(" Nhap:");
		scanf("%d", &*n);
		if(*n>p)
			printf("Nhap sai, hay nhap lai.\n");
	}
	while(*n>p);
}
void xoa(int k,int n,int p,char s[]){
	int i;
	for(i=p;i<k;i++){
		if(s[i+n]!='\0')
			s[i]=s[i+n];
		else{
			s[i]='\0';
			break;
		}
	}
	puts(s);
}