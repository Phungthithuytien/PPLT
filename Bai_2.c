#include <stdio.h>
int main()
{
	int n, x, i, s = 0, t = 1;
	printf("Nhap n : ");
	scanf("%d", &n);
	printf("Nhap x : ");
	scanf("%d", &x);
	for(i = 1; i <= n; i++)
	{
		t = t*x;
		s = s + t;
	}	
	printf("Ket qua day so = %d", s);
}
