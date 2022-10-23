#include <stdio.h>
int main ()
{
	int n;
	printf("Nhap n: ");
	scanf( "%d" , &n);
	int i, dem, first;
	dem = 0;
	i = n;
	while(i>0)
	{
		first=i%10;
		dem=dem+1;
		i=i/10;
	}
	int p, sau;
	p=1;
	sau=first;
	while(dem>1)
	{
		p=p*10;
		sau=sau*10;
		dem--;
	}
	int c;
	i = n%10;
	c = p*i+((n-sau-i)+first);
	printf("\nin ra = %d : ", c);
	return 0;
}
