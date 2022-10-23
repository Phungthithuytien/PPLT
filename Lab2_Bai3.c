#include <stdio.h>
int main ()
{
	int n, t, p;
	printf("Nhap n: ");
	scanf( "%d" , &n);
		printf("\nBang cuu chuong cua %d la :", n);
	t=0; 
	while(t<=10)
	{
		p=n*t;
		printf("\n%dx%d=%d", n, t, p);
		t++;
	}
	return 0;
 } 
