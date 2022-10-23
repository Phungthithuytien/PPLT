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
	t=1;
	i=n;
	while(i>0)
	{
		t=t*(i%10);
		i=i/10;
	}
	printf("Tich cac chu so cua %d la : %d", n, t);
	return 0;
}
