#include <stdio.h>
#include <math.h>
#include <stdbool.h> 
int hammu(int x, int y)
{
    if (y > 0)
        return (x*hammu(x, y - 1));
    else
        return 1;
}
int giaithua(int n)
{
	if(n == 1)
		return 1;
	else
		return n*giaithua(n - 1); 
}
int cau_iii(int n)
{
	if(n >= 0)
		return (2*n + 1)*(cau_iii(n - 1));
}
int cau_iv(int n)
{
	if(n >= 0)	
		return (2*n + 1) + (cau_iv(n - 1));
}
int cau_v(int n)
{
	if(n > 0)	
		return pow(-1, n + 1)*n + cau_v(n - 1);
}
int cau_4(int n)
{
	if(n > 0)
		return n*n + cau_4(n - 1);
}
bool cau_5(int n)
{
	if(n < 10)
	{
		if(n%2 == 0)
			return false;
	}
	else
	{
		if((n%10)%2 == 0)
			return false;
		return cau_5(n/10);
	}
}
int main()
{
    int x, y, n;
    printf("Cau i, ");
    printf("\nNhap vao x : ");
    scanf("%d", &x);
    printf("Nhap vao mu y : ");
    scanf("%d", &y);
    printf("Ket qua %d^%d = %d", x, y, hammu(x, y));
    printf("\nCau ii,");
    printf("\nNhap vao n : ");
    scanf("%d", &n);
    printf("Gia tri cua %d! = %d", n, giaithua(n));
    printf("\nCau iii,");
    printf("\nGia tri cua P(%d) = %d", n, cau_iii(n));
    printf("\nCau iv,");
    printf("\nGia tri cua S(%d) = %d", n, cau_iv(n));   
    printf("\nCau v,");
    printf("\nGia tri cua S(%d) = %d", n, cau_v(n));  
    printf("\nCau 4,");
    printf("\nGia tri cua S(%d) = %d", n, cau_4(n));  
	printf("\nCau 5,");
	if(cau_5(n))
		printf("\nSo nguyen n chua toan so le");
	else
		printf("\nSo nguyen n khong chua toan so le");		   
    return 0;
}
