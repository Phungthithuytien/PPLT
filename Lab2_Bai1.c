#include <stdio.h>
int main ()
{
	int n;
	printf("Nhap n: ");
	do
	{
	scanf( "%d" , &n);
	if(n<1){
		printf("Nhap sai! vui long nhap lai: ");
	} 
	}while(n<1);
	int i,s;
	i=2;
	s=0;
	while(i<n)
	{
		if(i%2==0)
			s=s+i;
		i++;
	}	
	printf("Tong cac so chan giua 1 va %d la : %d", n, s);
	return 0;
}
