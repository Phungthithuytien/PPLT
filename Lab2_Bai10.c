#include <stdio.h>
int main ()
{
	int n;
	printf("Nhap n: ");
	scanf( "%d" , &n);
	int i, s, t;
	t=0;
	i=n;
	while(i>0)
	{
		t=t*10+i%10;
		i=i/10;
	}
	printf("Dao nguoc cua %d la %d",n ,t);
	return 0;
}
