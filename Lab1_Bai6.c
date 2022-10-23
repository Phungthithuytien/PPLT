#include <stdio.h> 
int main()
{
	int n;
	printf("Nhap so n : ");
	scanf("%d", &n);
	if(n>=0)
	{
		printf("Gia tri tuyet doi cua n la : %d", n);
	}
	else
	{
		n=-n; 
		printf("Gia tri tuyet doi cua n la : %d", n);
	}
	return 0;
}
