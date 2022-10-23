#include<stdio.h>
#include<string.h>
#define MAX 50
int trung(char s1 [], char s2 []);
void main()
{
	char c1[MAX],c2[MAX];
	printf("Nhap chuoi 1:");
	fflush(stdin);
	fgets(c1, sizeof(c1), stdin);
	printf("Nhap chuoi 2:");
	fflush(stdin);
	fgets(c2, sizeof(c2), stdin);
	trung(c1,c2);
	if(trung(c1,c2)==0)
		printf("Chuoi 2 khong xuat hien trong chuoi 1");
	else
		printf("Chuoi 2 xuat hien trong chuoi 1 o vi tri:%d",trung(c1,c2));
}
int trung(char s1 [], char s2 []){
    int i = 0, j = 0;
    for ( i = 0; i < strlen(s1); i++ ){
        for ( j = 0; j < strlen(s2); j++ ){
            if (s1[i] == s2[j]){
                return i+1;
			}
		}
		j=0;
	}
	return 0;
}