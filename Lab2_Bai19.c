#include<stdio.h>
int main()
{
	int n, i=1, t=1;
	do
	{
		printf("Nhap n , n>=0 : ");
		scanf("%d",&n);
		if(n<0)
			printf("Nhap sai, nhap lai : \n");
	}	while(n<0);
	if(n==0){
		printf("%d! = 0",n);
	}
	else
	{
		while(i<=n)
		{
			t=t*i;
			i++;
		}
		printf("%d", t);
	}
	return 0;
}
