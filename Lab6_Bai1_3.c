#include <stdio.h>
#include <stdbool.h>
bool ktrasnt(int n, int i) 
{
	if (i == n) return true;
	if (n % i == 0) return false;
	return ktrasnt(n, i + 1);
}
int muhai(int x, int n)
{
    if (n != 0)
        return (x * muhai(x, n - 1));
    else
        return 1;
}
int main()
{
	int n, i = 2;
	printf("Nhap n : ");
	scanf("%d", &n);
	printf("Bai 1\n");
	if (n == 1)
		printf("%d khong phai so nguyen to", n);
	if (ktrasnt(n, i)) 
		printf("%d la so nguyen to");
	else
		printf("%d khong phai so nguyen to", n);
	printf("\nBai 3\n");
	int x = 2, ketqua;
    ketqua = muhai(x, n);
    printf("%d^%d = %d", x, n, ketqua);
	return 0;
}
