#include <stdio.h>
#define Max 100
void nhapn(int *n)
{
	do
	{
		printf("Nhap n : ");
		scanf("%d", &*n);
		if(*n<=0 || *n>100)
			printf("Nhap sai, moi nhap lai : "); 
	} while(*n<=0 || *n>100);
}
void input(int a[], int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("\nNhap gia tri phan tu thu a[%d] = ", i);
		scanf("%d", &a[i]); 
	} 
} 
void output(int a[], int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("%d\t", a[i]);
	}
}
void nhapm(int *m)
{
	do
	{
		printf("\n\nNhap m : ");
		scanf("%d", &*m);
		if(*m<=0 || *m>100)
			printf("Nhap sai, moi nhap lai : "); 
	} while(*m<=0 || *m>100);
}
void input2(int b[], int m)
{
	int j;
	for(j=0; j<m; j++)
	{
		printf("\nNhap gia tri phan tu thu b[%d] = ", j);
		scanf("%d", &b[j]); 
	} 
} 
void output2(int b[], int m)
{
	int j;
	for(j=0; j<m; j++)
	{
		printf("%d\t",b[j]);
	}
}
void tong2mang( int a[], int b[], int n, int m)
{
	int i, j, k=0, c[Max];
	if(n<m)
	{
		for(i = 0; i < n; i++)
    	{
        	c[k] = a[i];
        	k++;
    	}
    	k=0;
    	for(j = 0; j < n; j++)
    	{
        	c[k] = c[k] + b[j];
        	k++;
    	}
		printf("\n\nTong hai mang la: \n");
   		for(i = 0; i < n; i++)
   		{
       		printf("\t %d ", c[i]);
   		}
   		for(i=n; i<m; i++)
   		{
       		printf("\t%d ", b[i]);
		}
	}
	else //m<n a[n] b[m]
	{
		for(i = 0; i < m; i++)
    	{
        	c[k] = a[i];
        	k++;
    	}
    	k=0;
    	for(j = 0; j < m; j++)
    	{
        	c[k] = c[k] + b[j];
        	k++;
    	}
		printf("\n\nTong hai mang la: \n");
   		for(i = 0; i < m; i++)
   		{
       		printf("\t %d ", c[i]);
   		}
   		for(i=m; i<n; i++)
   		{
       		printf("\t%d ", a[i]);
   		}
	}	
}
void hieu2mang( int a[], int b[], int n, int m)
{
	int i, j, k=0, c[Max];
	if(n<m)
	{
		for(i = 0; i < n; i++)
    	{
        	c[k] = a[i];
        	k++;
    	}
    	k=0;
    	for(j = 0; j < n; j++)
    	{
        	c[k] = c[k] - b[j];
        	k++;
    	}
		printf("\n\nTong hai mang la: \n");
   		for(i = 0; i < n; i++)
   		{
       		printf("\t %d ", c[i]);
   		}
   		for(i=n; i<m; i++)
   		{
       		printf("\t%d ", b[i]);
		}
	}
	else 
	{
		for(i = 0; i < m; i++)
    	{
        	c[k] = a[i];
        	k++;
    	}
    	k=0;
    	for(j = 0; j < m; j++)
    	{
        	c[k] = c[k] - b[j];
        	k++;
    	}
		printf("\n\nTong hai mang la: \n");
   		for(i = 0; i < m; i++)
   		{
       		printf("\t %d ", c[i]);
   		}
   		for(i=m; i<n; i++)
   		{
       		printf("\t%d ", a[i]);
   		}
	}	
}
void tich2mang( int a[], int b[], int n, int m)
{
	int i, j, k=0, c[Max];
	if(n<m)
	{
		for(i = 0; i < n; i++)
    	{
        	c[k] = a[i];
        	k++;
    	}
    	k=0;
    	for(j = 0; j < n; j++)
    	{
        	c[k] = c[k]*b[j];
        	k++;
    	}
		printf("\n\nTong hai mang la: \n");
   		for(i = 0; i < n; i++)
   		{
       		printf("\t %d ", c[i]);
   		}
   		for(i=n; i<m; i++)
   		{
       		printf("\t%d ", b[i]);
		}
	}
	else 
	{
		for(i = 0; i < m; i++)
    	{
        	c[k] = a[i];
        	k++;
    	}
    	k=0;
    	for(j = 0; j < m; j++)
    	{
        	c[k] = c[k]*b[j];
        	k++;
    	}
		printf("\n\nTong hai mang la: \n");
   		for(i = 0; i < m; i++)
   		{
       		printf("\t %d ", c[i]);
   		}
   		for(i=m; i<n; i++)
   		{
       		printf("\t%d ", a[i]);
   		}
	}	
}

int main()
{
    int a[Max], b[Max];
    int i, j, n , m;
    nhapn(&n);
	input(a, n);
	printf("\nMang 1 chieu thu nhat : ");
	output(a, n);
	nhapm(&m);
	input2(b, m);
	printf("\nMang 1 chieu thu hai : ");
	output2(b, m);
	printf("\nTong 2 mang :");
	tong2mang(a, b, n, m);
	hieu2mang(a, b, n, m);
	tich2mang(a, b, n, m);
    return 0;
}
