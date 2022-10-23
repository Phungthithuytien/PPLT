#include <stdio.h>
int main()
{
	int a, b, h;
	float s;
	printf("Nhap do dai day lon : ");
	scanf("%d", &a);
	printf("Nhap do dai day nho : ");
	scanf("%d", &b);	
	printf("Nhap do dai chieu cao : ");
	scanf("%d", &h);
	s = ((a+b)*h)/2;
	printf("Dien tich hinh thang la : %f", s);
} 
