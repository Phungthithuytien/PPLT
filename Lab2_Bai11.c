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
	if(t==n)
		printf("%d la palindrome", n);
	else
		printf("%d khong la palindrome", n);
	return 0;
}
