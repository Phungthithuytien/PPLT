#include<stdio.h>
int main()
{
	int n;
	printf("Nhap n ");
	scanf("%d",&n);
	if(n<10)
		printf("%d la so armstrong.", n);
	else{
	int dem = 0, a;
	a=n;
	while(a>0)
	{
		dem=dem+1;
		a=a/10;
	}
	int t = 0, i, x, tam;
	a=n;
	x=dem;
	while(a>0)
	{
		tam=1;
		i=a%10;
		while(dem>0)
		{
			tam=tam*i;
			dem--;
		}
		t=t+tam;
		a=a/10;
		dem=x;
	}
	if(t==n)
		printf("%d la so armstrong.", n);
	else
		printf("%d khong la so armstrong.", n);
	}
	return 0;
}
		
