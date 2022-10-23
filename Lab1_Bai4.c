#include <stdio.h>
int main()
{
	int songay,sonam,sotuan,num1;
	
	printf("Nhap so ngay can chuyen doi : ");
	
	scanf("%d", &songay);
	
	sonam=songay/365;
	
	num1=songay-(sonam*365);
	
	sotuan=num1/7; 
	
	num1=songay-(sotuan*7);
	
	printf("So ngay du : %d\n So tuan : %d\n So nam : %d", num1, sotuan, sonam );
	
	return 0;
}
