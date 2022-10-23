#include <stdio.h>
int main ()
{
	int n;
	printf("Nhap Decimal n: ");
	scanf( "%d" , &n);
	int i, s, t;
	t=0;
	i=0;
	s=0;
	while(n>0)
	{
		t=t*10+n%2;
		n=n/2;
		s=s+1;
	}
	printf("%d\n", t);
	int x=0;
	while(t>0)
	{
		x=x*10+t%10;
		t=t/10;
	}
	printf("%d    %d", s, x);
	int d=0, o;
	o=x;
	while(x>0)
	{
		d=d+1;
		x=x/10;
	}
	printf("\n%d\n", d);
	while(s>d)
	{
		printf("0");
		d++;
	}
	printf("%d", o);
	return 0;
}
