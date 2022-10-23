#include <stdio.h>
int main ()
{
	int n;
	do
	{
		printf("Nhap n , n>1: ");
		scanf("%d",&n);
		if(n<2)
			printf("Nhap sai, nhap lai: \n");
	}	while(n<2);
	int i,s;
	i=2;
	s=0;
	while(i<n)
	{
		if(i%2!=0)
			s=s+i;
		i++;
	}	
	printf("Tong cac so le giua 1 va %d la : %d", n, s);
	return 0;
}
