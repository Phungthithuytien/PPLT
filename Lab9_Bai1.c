#include <stdio.h>
#include <conio.h>
int main()
{
	FILE *f, *fo;
	int sum = 0;
	int i, n = 0;
	f = fopen("input01.txt", "r");
	if (f == NULL)
	{
    	return 0;
	}
	else
	{
    	for(i = 0; i < 20; i++)
		{
    		fscanf(f, "%d", &n);
    		sum += n;
    	}
    	fo = fopen("output01.txt", "w");
		fprintf(fo, "sum = %d", sum);
		fclose(f);
		fclose(fo);
	}
	return 1;
}

