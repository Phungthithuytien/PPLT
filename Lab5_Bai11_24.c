#include <stdio.h>
#define Max 100 
int nhapn(int *n)
{
	do
	{
		printf("Nhap n : ");
		scanf("%d", &*n);
		if(*n <= 0 || *n > 100)
			printf("Nhap sai, nhap lai : ");
	}while(*n <= 0 || *n > 100);
}
void input(int n, int a[Max])
{
	int i; 
	for(i = 0; i < n; i++)
	{
		printf("\nNhap gia tri cho phan tu thu a[%d] = ", i);
		scanf("%d", &a[i]);
	}
} 
void output(int n, int a[Max])
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("%d\t", a[i]);
	}
}
int max(int n, int a[Max])
{
	int i, max = a[0];
	for(i = 0; i < n; i++)
	{
		if(a[i] > max)
			max = a[i];
	}
	return max;
}
int min(int n, int a[Max])
{
	int i, min = a[0];
	for(i = 0; i < n; i++)
	{
		if(a[i] < min)
			min = a[i];
	}
	return min;
}
int tongmang(int n, int a[Max])
{
	int i, S = 0;
	for(i = 0; i < n; i++)
	{
		S = S + a[i];
	}
	return S;
}
int tongam(int n, int a[Max])
{
	int i, s = 0;
	for(i = 0; i < n; i++)
	{
		if(a[i] < 0)
			s = s + a[i];
	}
	return s;
}
int tongchan(int n, int a[Max])
{
	int i, s = 0;
	for(i = 0; i < n; i++)
	{
		if(a[i]%2 == 0)
			s = s + a[i];
	}
	return s;
}
void daomang(int n, int a[Max])
{
	int i;
	for(i = n -1 ; i >= 0; i--)
	{
		printf("%d\t", a[i]);
	}
}
void xoavitri(int vitri, int *n, int a[Max])
{
	int i;
	for(i = vitri; i < *n-1; i++)
	{
		a[i] = a[i + 1];
	}
	*n = *n - 1;
}
int demtrunglap(int n, int a[Max])
{
	int i, j, d = 0, s = 0;	
	int b[n];	
	for(i = 0; i < n; i++)
		b[i] = 0;
	for(i = 0; i < n; i++)
	{
		d = 0;
		if(b[i] == 0)
		{			
			for(j = 0; j < n; j++)
			{
				if(a[i] == a[j])
				{
					d++;
					b[j] = -1;
				}	
			}
			s = s + (d-1);
		}
	}
	return s;
}
void xoatrunglap(int a[Max], int n)
{
	int i, j, d = 0, c[Max], t = 0;	
	int b[n];	
	for(i = 0; i < n; i++)
		b[i] = 0;
	for(i = 0; i < n; i++)
	{
		d = 0;
		if(b[i] == 0)
		{			
			for(j = 0; j < n; j++)
			{
				if(a[i] == a[j])
				{
					d++;
					b[j]=-1;
				}	
			}
			c[t++] = a[i];
		}
	}
	output(t, c); 
}
void tansotrunglap(int a[Max], int n)
{
	int i,j,d=0;	
	int b[n];	
	for(i=0; i<n; i++)
		b[i]=0;
	for(i=0; i<n; i++)
	{
		d=0;
		if(b[i]==0)
		{			
			for(j=0; j<n; j++)
			{
				if(a[i]==a[j])
				{
					d++;
					b[j]=-1;
				}	
			}
			printf("\n%d xuat hien %d lan", a[i], d);
		}
	}
}
int nhapm(int *m)
{
	do
	{
		printf("\nNhap m : ");
		scanf("%d", &*m);
		if(*m <= 0 || *m > 100)
			printf("Nhap sai, nhap lai : ");
	}while(*m <= 0 || *m > 100);
}
void inputm(int m, int b[Max])
{
	int i; 
	for(i = 0; i < m; i++)
	{
		printf("\nNhap gia tri cho phan tu thu b[%d] = ", i);
		scanf("%d", &b[i]);
	}
}
void noimang(int m, int n, int a[Max], int b[Max])
{
	int i, c[Max], j = m + n;
	for(i = 0; i < n; i++)
	{
		c[i] = a[i];
	}
	for(i = 0; i < m; i++)
	{
		c[i+n] = b[i];
	}
	for(i = 0; i < j; i++)
	{
		printf("\t%d", c[i]);
	}
}
void chiachanle(int a[Max], int n)
{
	int chan[Max], le[Max], i, c = 0, l = 0;
	for(i = 0; i < n; i++)
	{
		if(a[i]%2 == 0)
			chan[c++] = a[i];
		else
			le[l++] = a[i];
	}
	printf("\nMang chan : ");
	output(c, chan);
	printf("\nMang le : ");
	output(l, le);	
}
int key(int a[], int n, int x)
{
	int i;
	for(i = 0; i < n; i++)
	{
		if(i == x) 
			return a[i]; 
	}	
} 
void tangdan(int a[], int n)
{
	int i, j, the;
	for(i = 0; i < n - 1; i++)
	{
        for(j = i + 1; j < n; j++)
		{
            if(a[i] > a[j])
			{
                the = a[i];
                a[i] = a[j];
                a[j] = the;        
            }
        }
    }
}
int main()
{
	int n, m, i, a[Max], b[Max]; 
	nhapn(&n);
	input(n, a);
	printf("Cau 11");
	printf("\nMax cua mang = %d", max(n, a));
	printf("\nCau 12");
	printf("\nMin cua mang = %d", min(n, a));
	printf("\nCau 13");
	printf("\nTong cua mang la : %d", tongmang(n, a));
	printf("\nCau 14");
	printf("\nTong cac so am cua mang la : %d", tongam(n, a));
	printf("\nCau 15");
	printf("\nTong cac so chan cua mang la : %d", tongchan(n, a));
	printf("\nCau 16");
	printf("\nMang sau khi dao : ");
	daomang(n, a);		
	printf("\nCau 17");
	int vitri;
	printf("\nNhap vi tri can xoa : ");
	scanf("%d", &vitri);
	printf("\nMang sau khi xoa phan tu o vi tri %d : ", vitri);
	xoavitri(vitri, &n, a);
	output(n, a);
	printf("\nCau 18");
	printf("\nSo phan tu trung lap trong mang la : %d", demtrunglap(n, a));
	printf("\nCau 19");
	printf("\nMang khi xoa cac phan tu trung lap : ");
	xoatrunglap(a, n);
	printf("\nCau 20");
	printf("\nTan so cua cac phan tu : ");
	tansotrunglap(a, n);
	printf("\nCau 21");
	nhapm(&m);
	inputm(m, b);
	noimang(m, n, a, b);
	printf("\nCau 22");
	printf("\nMang khi chia chan le : ");
	chiachanle(a, n);
	printf("\nCau 23");
	int x; 
	printf("\nNhap vi tri can lay gia tri : ");
	scanf("%d", &x); 
	printf("\nGia tri tai vi tri %d la %d", x, key(a, n, x)); 
	printf("\nCau 24");
	printf("\nMang theo thu tu tang dan la : ");
	tangdan(a, n);
	output(n, a);
} 
