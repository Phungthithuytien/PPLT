#include <stdio.h>
int demchuso(int n)
{
	while(n > 0)
	{
		return demchuso(n/10) + 1;
	}
}
int main()
{
	int n, dem = 0;
	do
	{
		printf("Nhap so nguyen duong : ");
		scanf("%d", &n);
		if(n <= 0)
		printf("Nhap sai, vui long nhap lai!\n");
	}while(n <= 0);
	printf("So chu so = %d", demchuso(n));
}
