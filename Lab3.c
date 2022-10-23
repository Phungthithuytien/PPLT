#include <stdio.h>
#include<stdbool.h>
int tongchan(int n)
{
	int i,s;
	i=2;
	s=0;
	while(i<n)
	{
		if(i%2==0)
			s=s+i;
		i++;
	}	
	return s;
}
int tongle(int n)
{
	int i,s;
	i=2;
	s=0;
	while(i<n)
	{
		if(i%2!=0)
			s=s+i;
		i++;
	}	
	return s;
}
void bangcuuchuong(int n)
{
	int i;
	for(i=1; i<=9; i++)
	{
		printf("\n%d * %d = %d", n, i, n*i);
	}
}
int tong1denn(int n)
{	
	int i,s;
	i=2;
	s=0;
	while(i<n)
	{
			s=s+i;
		i++;
	}	
	return s;
}
int chusodau(int n)
{
	int s, dau;
	while(n>0)
	{
		dau=n%10;
		n=n/10;
	}
	return dau;
}
int tongchuso(int n)
{
	int s, t;
	t=0;
	while(n>0)
	{
		t=t+n%10;
		n=n/10;
	}
	return t;
}
int tichchuso(int n)
{
	int s, t;
	t=1;
	while(n>0)
	{
		t=t*(n%10);
		n=n/10;
	}
	return t;
}
int demchuso(int n)
{
	int s, t;
	t=0;
	while(n>0)
	{
		t=t+1;
		n=n/10;
	}
	return t;
}
int doichusodaucuoi(int n)
{
	int i, dem, first;
	dem = 0;
	i = n;
	while(i>0)
	{
		first=i%10;
		dem=dem+1;
		i=i/10;
	}
	int p, sau;
	p=1;
	sau=first;
	while(dem>1)
	{
		p=p*10;
		sau=sau*10;
		dem--;
	}
	int c;
	i = n%10;
	c = p*i+((n-sau-i)+first);
	return c;
}
int sodaonguoc(int n)
{
	int i, s, t;
	t=0;
	while(n>0)
	{
		t=t*10+n%10;
		n=n/10;
	}
	return t;
}
int palindrome(int n)
{
	int s, t;
	t=0;
	while(n>0)
	{
		t=t*10+n%10;
		n=n/10;
	}
	return t;
}
bool laSNT(int n)
{
	if(n<2)
		return false;
	int i;
	for(i = 2; i < n; i++)
		if(n%i==0)
			return false;
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
int sohoanhao(int n)
{
	int t = 0, i;
	for(i=1; i<n; i++)
	{
		if(n%i==0)
			t=t+i;
	}
	if(t==n)
		return true;
	else
		return false;
	return 0;
}
void lksonguyento(int n)
{
	int j;
	for(j=2; j<n; j++)
	{
		if(laSNT(j))
			printf("%d      ",j);
	}
}
void lksohoanhao(int n)
{
	int j;
	for(j=2; j<n; j++)
	{
		if(sohoanhao(j))
			printf("%d    ", j);
	}
}
void lksoarmstrong(int n)
{
	int j;
	for(j=10; j<n; j++)
	{
		if(armstrong(j))
			printf("%d      ",j);
	}
}
void Binary(int n)
{
	int i, s, t;
	t=0;
	i=0;
	s=0;
	while(n>0)
	{
		t=t*10+n%2;
		n=n/2;
		s=s+1;
	}
	int x=0;
	while(t>0)
	{
		x=x*10+t%10;
		t=t/10;
	}
	int d=0, o;
	o=x;
	while(x>0)
	{
		d=d+1;
		x=x/10;
	}
	while(s>d)
	{
		printf("0");
		d++;
	}
	printf("%d", o);
}
int giaithua(int n)
{
	int i = 1, t = 1;	
	while(i<=n)
	{
		t=t*i;
		i++;
	}
	return t;
}
int main()
{
	int n;
	printf("Nhap n: ");
	do
	{
	scanf( "%d" , &n);
	if(n<1){
		printf("\nNhap sai! vui long nhap lai: ");
	} 
	}while(n<1);
	printf("\nTong cac so chan giua 1 va %d la : %d", n, tongchan(n));
	printf("\nTong cac so le giua 1 va %d la : %d", n, tongle(n));
	printf("\nBang cuu chuong cua %d : ", n);
	bangcuuchuong(n);
	printf("\nTong cac so giua 1 va %d la : %d", n, tong1denn(n));
	printf("\nChu so dau cua %d la : %d", n, chusodau(n));
	printf("\nChu so cuoi cua %d la : %d", n, n%10);
	printf("\nTong cac chu so cua %d la : %d", n, tongchuso(n));
	printf("\nTich cac chu so cua %d la : %d", n, tichchuso(n));
	printf("\nCo so chu so cua %d la : %d", n, demchuso(n));
	printf("\nKhi doi cho chu so dau va cuoi ta duoc : %d", doichusodaucuoi(n));
	printf("\nDao nguoc cua %d la %d",n ,sodaonguoc(n));
	if(palindrome(n)==n)
		printf("\n%d la palindrome", n);
	else
		printf("\n%d khong la palindrome", n);
	if(laSNT(n))
		printf("\n%d la so nguuyen to", n);
	else printf("\n%d khong la so nguyen to", n);
	if(armstrong(n))
		printf("\n%d la armstrong", n);
	else	
		printf("\n%d khong la armstrong", n);
	if(sohoanhao(n))
		printf("\n%d la so hoan hao", n);
	else
		printf("\n%d khong la so hoan hao", n);
	printf("\nCac so nguyen to giua 1 va %d la : ",n);
	lksonguyento(n);
	printf("\nCac so hoan hao nam giua 1 va %d la : ", n);	
	lksohoanhao(n);
	printf("\nCac so amstrong giua 1 va %d la: ",n);
	lksoarmstrong(n);	
	printf("\nDecimal %d = ", n);
	Binary(n);
	printf(" Binary");
	printf("\n%d! = %d", n, giaithua(n));
	return 0;
}







