#include<stdio.h>
int main()
{
	int n;
	do
	{
		printf("nhap n , n>1 : ");
		scanf("%d",&n);
		if(n<=1)
			printf("Nhap sai, nhap lai: \n");
	}	while(n<=1);
	printf("Cac so nguyen to nam giua 1 va %d la : ", n);
	int j;
	for(j=2; j<n; j++)
	{
		int t = 0, i;
		for(i=1; i<j; i++)
		{
			if(j%i==0)
				t=t+i;
		}
		if(t==j)
			printf("%d    ", j);
	}
	return 0;
}
