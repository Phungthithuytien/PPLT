#include <stdio.h>
int main ()
{
	int n;
	printf("Nhap n: ");
	scanf( "%d" , &n);
	if(n<1){
		printf("Nhap sai! vui long nhap lai: ");
	}
	int i, s, t;
	printf("Chu so cuoi cua %d la : %d", n, n%10);
	t=n;
	while(t>0)
	{
		i=t%10;
		t=t/10;
	}
	printf("\nChu so dau cua %d la : %d", n, i);
	return 0;
}
	
