#include<stdio.h>
int main()
{
	int n;
	do
	{
		printf("Nhap n , n>=2:");
		scanf("%d",&n);
		if(n<2)
			printf("Nhap sai, nhap lai : \n");
	}	while(n<2);
	int  a, i;
	for(i=2; i<n; i++)
	{
		if(n%i==0)
			a=a+1;
	}
	if(a==0)
		printf("\n%d la so nguuyen to", n);
	else printf("\n%d khong la so nguyen to", n);
	return 0;
}
