#include <stdio.h>
int main()
{
	int n, i;
	printf("Nhap so n : ");
	scanf("%d", &n);
	printf("\n\nBai 1: ");
	i=1;
	int t=0;
	while(i<n)
	{
		if(i%2==0)
			t=t+1;
		i++;	
	}
	printf("\nCo %d so chan nho hon %d", t, n);
	printf("\n\nBai 2: ");
	i=1;
	int s=0;
	while(i<n)
	{
		if(i%2!=0)
			s=s+i;
		i++;	
	}
	printf("\nTong so le nho hon %d la : %d", n, s);
	printf("\n\nBai 3 :"); 
	i=3;
	printf("\nCac so la boi so cua 3 nho hon %d la: ",n);
	while(i<n)
	{
		if(i%3==0)
			printf("%d   ",i);
		i++;	
	}
	printf("\n\nBai 4 : ");
	if(n<2)
		printf("\n%d khong phai so nguyen to",n) ;
	t=0; 
	int a; 
	for( a=2 ; a<n ; a++)
	{
		if(n%a==0)
			t++; 
	}
	if(t==0)
		printf("\n%d la so nguyen to",n);
	else 
		printf("\n%d khong la so nguyen to",n);
	printf("\n\nBai 5"); 
	t=0; 
	int x, p;
	p=0;
	x=n; 
	while(x>0)
	{
		a=x%10;
		if(a%2!=0) 
			t=t+a;
		if(a==2||a==3||a==5||a==7) 
			p=p+1;
		x=x/10;	
	}
	printf("\nTong cac chu so le co trong %d la : %d", n, t) ;
	printf("\n\nBai 6 : ");
	printf("\nS(n) = 1/2 + 1/3 +.....+1/(n+1)");
    float S = 0.0;
	while(n <= 0);
    for(i = 1; i <= n; i++)
    {
        S += 1.0/(i*(i + 1));
    }
    printf("\nS(%d) = %f", n, S);
	printf("\n\nBai 7 : ");
	if(p==0)
		printf("\n %d khong ton tai chu so nguyen to", n);
	else
		printf("\n %d ton tai chu so nguyen to", n);
	printf("\n\nBai 8 : ");
	printf("\nSo nguyen to nho hon %d la :  ", n); 
	for( a=1 ; a<=n ; a++)
	{
		t=0;
		int j;
		for(j=1; j<a; j++)
		{
			if(a%j==0)
			t=t+1;
		}
		if(t==1)
			printf("%d   ",a);
	}
	int m;
	printf("\n\nBai 9 : ");
	printf("\nNhap m : ");
	scanf("%d", &m);
	if(m>=n)
		printf("\nNhap lai m nho hon %d", n);
	printf("\nCac so giua n va m la :  ");
	x=m+1;
	while(x<n)
	{
		printf("%d    ", x);
		x++;
	}
	printf("\n\nBai 10 : ");
	printf("\nBang cuu chuong cua %d la :", m);
	t=0; 
	while(t<=10)
	{
		p=m*t;
		printf("\n%dx%d=%d", m, t, p);
		t++;
	}
	return 0;
 } 
