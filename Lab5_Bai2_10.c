#include <stdio.h>
#include <stdbool.h>
int palindrome(int n)
{
	int t = 0;
	while(n>0)
	{
		t = t*10 + n%10;
		n = n/10;
	}
	return t;
}
bool prime(int n)
{
	int i, dem = 0;
	for(i=2; i<n; i++)
	{
		if(n%i == 0)
			return false;
	}
	return true;
}
bool armstrong(int n)
{
	if(n<10)
		return true;
	else
	{
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
			return true;
		else
			return false;
	}
}
bool perfect(int n)
{
	int i, t = 0;
	for(i=1; i<n; i++)
	{
		if(n%i == 0)
			t = t+i; 
	}
	if(t == n)
		return true;
	else
		return false;
}
bool ktrasnt(int n)
{
	int i;
	for(i=2; i<n; i++)
	{
		if(n%i == 0)
			return false;
	}
	return true;
}
int chuyendoi(int n)
{
	int d = 0, j = 1;
	while(n > 0)
	{
		d = d + (n%2)*j;
		j = j*10;
		n = n/2;
	}
	return d;
} 
void ngaythang(int n)
{
	int nam, tuan, ngay;
	nam = n/365;
	tuan = (n - nam*365)/7;
	ngay = n - nam*365 - tuan*7;
	printf("\n%d ngay duoc %d nam, %d tuan va %d ngay", n, nam, tuan, ngay);
}
int main()
{
	int n, i;
	do
	{
		printf("Nhap n : ");
		scanf("%d", &n);
		if(n<0)
			printf("Nhap sai, nhap lai : \n");
	}while(n<0);
	printf("\nCau 2 : ");
	if(palindrome(n) == n)
		printf("\n%d la so palindrome", n);
	else
		printf("\n%d khong phai la so palindrome", n);
	printf("\nCau 3 : ");
	if(prime(n))
		printf("\n%d la so nguyen to", n);
	else
		printf("\n%d khong phai la so nguyen to", n);
	
	printf("\nCau 4 : ");
	if(armstrong(n))
		printf("\n%d la so armstrong", n);
	else
		printf("\n%d khong phai la so armstrong", n);
	printf("\nCau 5 : ");
	if(perfect(n))
		printf("\n%d la so perfect", n);
	else
		printf("\n%d khong phai la so perfect", n);
	printf("\nCau 6 :");
	printf("\nCac so SNT giua 1 va %d la : ", n);
	for(i=2; i<n; i++)
	{
		if(ktrasnt(i))
			printf("%d\t", i);
	}
	printf("\nCau 7 :");
	printf("\nCac so armstrong giua 1 va %d la : ", n);
	for(i=2; i<n; i++)
	{
		if(armstrong(i))
			printf("%d\t", i);
	}
	printf("\nCau 8 :");
	printf("\nCac so perfect giua 1 va %d la : ", n);
	for(i=2; i<n; i++)
	{
		if(perfect(i))
			printf("%d\t", i);
	}
	printf("\nCau 9 : ");
	printf("\n(%d)10 = (%d)2", n, chuyendoi(n));
	printf("\nCau 10 : ");
	ngaythang(n);
}
