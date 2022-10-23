#include<stdio.h>
int main()
{
	int n, i;
	do
	{
		printf("Nhap n , n>0: ");
		scanf("%d",&n);
		if(n<1)
			printf("Nhap sai, nhap lai: \n");
	}	while(n<1);
	printf("Cac so amstrong giua 1 va %d la: ",n);
	if(n>10)
	{
		for(i=2; i<10; i++)
		{
			printf("%d     ", i);
		}
	}
	int dem = 0, a, j;
	a=n;
	for(j=10; j<n; j++)
	{
		while(a>0)
		{
			dem=dem+1;
			a=a/10;
		}
		int t = 0, x, tam;
		a=j;
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
		if(t==j)
			printf("%d     ", j);
	}
	return 0;
}
		
