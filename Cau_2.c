#include <stdio.h>
int main()
{
	int n, i, j, t;
	do
	{
		scanf("%d", &n);
		if(n < 0)
			printf("Nhap sai, nhap lai\n");
	}while(n < 0);
	float S = 0;
	for(i = 2; i <= 2*n; i = i + 2)
	{
		j = i;
		t = 1;
		while(j > 0)
		{
			t = t*j;
			j--;
		}
		S = S + 1.0/t;
	}
	printf("\n%0.6f", S);
}
