#include <stdio.h>
float taxi(int d)
{
	int tong = 0;
	if(d<=1)
		tong = 18000;
	if(1 < d <= 10)
		tong = 18000 + (d-1)*8000;
	if(10 < d <= 30)
		tong = 18000 + 9*8000 + (d-10)*6000;
	if(d > 30)
		tong = 18000 + 9*8000 + 20*6000 +(d-30)*4000;
	return tong;
}
int main ()
{
float d;
	do
	{
		printf("\nNhap so km : ");
		scanf("%f", &d);
		if(d<0)
			printf("Nhap sai, vui long nhap d<0");
	}while(d<0);
	printf("\nSo tien taxi : %f", taxi(d));
    return 0;
}
