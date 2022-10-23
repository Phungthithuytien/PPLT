#include <stdio.h>
#include <math.h>
#include <stdbool.h>
/*float sotien(int m, int h)
{
	float tong = 0;
	if(h > 50)
		tong = 40*m + 5*1.8*m + 5*2.5*m + (h-50)*2.6*m;
	if(45 < h <= 50)
		tong = 40*m + 5*1.8*m + (h-45)*2.5*m;
	if(40< h <= 45)
		tong = 40*m + (h-40)*1.8*m;
	if(h <= 40)
		tong = m*h;
	return tong;
}
float taxi(int d)
{
	int tong = 0;
	if(d<=1)
		tong = 18000;
	if(1 < d <= 10)
		tong = 18000 + (d-1)*8000;
	if(10 < d <= 30)
		tong = 18000 + 9*8000 + (d-10)*6000;
	if(d > 30)
		tong = 18000 + 9*8000 + 20*6000 +(d-30)*4000;
	return tong;
}
float khoangcach(float x0, float y0, float xA, float yA)
{
	float d;
	d = sqrt(pow((xA - x0), 2) + pow((yA - y0), 2));
	return d;
}
bool ktra(float a, float b, float c)
{
	if(a + b <= c || a + c <= b || c + b <= a)	
		return false;
	return true;
}
float chuvi(float a, float b, float c)
{
	float C = a + b + c;
	return C;
}
float dientich(float a, float b, float c)
{
	float p = chuvi(a, b, c)/2;
	float s = sqrt(p*(p-a)*(p-b)*(p-c));
	return s; 
} 
int ktradacbiet(float a, float b, float c)
{	
	if(a*a == b*b+c*c || a*a + c*c == b*b || a*a + b*b == c*c) 
		return 0;
	if(a == b && b == c)
		return 2;	
	if(a == b || b == c || c == a)
		return 1;
} 
float bieuthuc(int x, int y)
{
	float s = (3*pow(x, 3)*y - 1.0*pow(x, 2)/2 + 1.0*x*y/5)*6*x*pow(y, 3);
	return s;
} 
double hamfx(double x)
{
	double fx;
	if(x < 0)
		fx = sin(x)*cos(5*x);
	if(x == 0)
		fx = pow(5, x);
	if(0 < x < 5)
		fx = exp(x);
	if(x >= 5)
		fx = pow(5, x)/(x + 5);
	return fx;
}

int main()
{
	/*int m, h;
	do
	{
		printf("Nhap so so gio lam viec : ");
		scanf("%d", &h);
		printf("Nhap so tien cho 1 gio lam viec : ");
		scanf("%d", &m);
		if(h < 0 || m < 0)
			printf("Nhap sai, vui long nhap lai h>=0 va m>=0\n");
	}while(h < 0 || m < 0);
	printf("So tien nhan vien nhan duoc la : %f", sotien(m, h));
	float d;
	do
	{
		printf("\nNhap so km : ");
		scanf("%f", &d);
		if(d<0)
			printf("Nhap sai, vui long nhap d<0");
	}while(d<0);
	printf("\nSo tien taxi : %f", taxi(d));
	float x0, y0, r, xA, yA;
	printf("\nNhap toa do tam x0 :");
	scanf("%f", &x0);
	printf("Nhap toa do tam y0 : ");
	scanf("%f", &y0);
	printf("\n Nhap ban kinh : ");
	scanf("%f", &r);
	printf("\nNhap toa do xA :");
	scanf("%f", &xA);
	printf("Nhap toa do yA : ");
	scanf("%f", &yA);
	if(khoangcach(x0, y0, xA, yA) > r)
		printf("\nDiem A khong nam trong r");
	else
		printf("\nDiem A nam trong r"); 
	float a, b, c; 
	printf("\nNhap canh a : ");
	scanf("%f", &a);
	printf("\nNhap canh b : ");
	scanf("%f", &b);
	printf("\nNhap canh c : ");
	scanf("%f", &c);
	if(ktra(a, b, c))
		printf("%f,  %f,  %f la 3 canh cua tam giac", a, b, c);
	else
		printf("\nLoi");	
	printf("\nChu vi tam giac : %f", chuvi(a, b, c));
	printf("\nDien tich tam giac : %f", dientich(a, b, c));
	if(ktradacbiet(a, b, c) == 0)
		printf("\nLa tam giac vuong");
	if(ktradacbiet(a, b, c) == 2)
		printf("\nLa tam giac deu");
	if(ktradacbiet(a, b, c) == 1)
		printf("\nLa tam giac can"); 
	int x, y;
	printf("\nNhap x : ");
	scanf("%d", &x);
	printf("\nNhap y : ");
	scanf("%d", &y);	
	printf("\nDap an bieu thuc : %f", bieuthuc(x, y));
	double x;
	printf("\nNhap x : ");
	scanf("%lf", &x);
	printf("\nDap an bieu thuc la : %lf", hamfx(x));
}
int dem(int n)
{
	int dem = 0;
	while(n>0)
	{
		n = n/10;
		dem++;
	}
	return dem;
}
int main()
{
	int n;
	printf("Nhap ma khach hang : ");
	scanf("%d", &n);
	if(dem(n) != 5)
	{
		printf("Nhap du lieu sai");
		return 1;
	}
	else
	{
		int t = (n/1000)%10;
		printf("%d\n", t);
		if(8 <= t && t <= 9)
			printf("Xep hang khach hang hang Bach kim");
		if(6 <= t && t <= 7)
			printf("Xep hang khach hang hang Vang");
		if(3 <= t && t <= 5)
			printf("Xep hang khach hang hang Bac");
		if(0 <= t && t <= 2)
			printf("Xep hang khach hang hang Dong");
	}
	return 0;
} */

int main()
{
	int x;
	printf("\nNhap x : ");
	scanf("%d", &x);
	
}

