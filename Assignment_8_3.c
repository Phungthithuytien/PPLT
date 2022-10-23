#include<stdio.h>
#include <stdlib.h>
#define max 100
#define min - 1000000
int main()
{
	FILE * file, * line;
	file = fopen("matran.txt", "r");
	int n, j, i, mt1, mt2, k;
	int a[max][max];
	int b[max];
	int m1 = min;
	if (file == NULL)
	{
	    printf("Error Reading File\n");
	    exit(0);
	}
	fscanf(file, "%d", & n);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
		    fscanf(file, "%d", & a[i][j]);
		}
	}
	mt1 = a[0][0];
	mt2 = a[0][0];
	for (i = 0; i < n; i++)
	{
		b[i] = 0;
		for (j = 0; j < n; j++)
		{
			if (a[i][j] > mt1) mt1 = a[i][j];
			if (a[i][j] < mt2) mt2 = a[i][j];
			b[i] += a[i][j];
	    }
		if (m1 < b[i]) 
		{
			m1 = b[i];
			k = i;
	    }
	}
	fclose(file);
	line = fopen("output3.txt", "w");
	fprintf(line, "\nPhan tu lon nhat trong ma tran: %d", mt1);
	fprintf(line, "\nPhan tu be nhat trong ma tran: %d", mt2);
	fprintf(line, "\nDong co tong lon nhat trong ma tran: %d", k);
	fclose(line);
	return 0;
}
