#include <stdio.h>
int hammu(int x, int n)
{
    if (n != 0)
        return (x * hammu(x, n - 1));
    else
        return 1;
}
int main()
{
    int x, n, ketqua;
    printf("Nhap vao x: ");
    scanf("%d", &x);
    printf("Nhap vao mu n: ");
    scanf("%d", &n);
    ketqua = hammu(x, n);
    printf("%d^%d = %d", x, n, ketqua);
    return 0;
}
