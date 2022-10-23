#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define Max 100
int main()
{
	FILE *f, *fo;
	int s, i;
	char a[Max];
	f = fopen("input02.txt", "rt");
	fo = fopen("output02.txt", "wt");
	if (f == NULL)
		printf("Tap tin khong ton tai");
	else
	{
		for(i = 1; i <= 5 ; i++)
		{
			if(fgets(a, Max, f) != NULL)
			{
				fprintf(fo, "\n%s", a);
				s = strlen(a);
				fprintf(fo, "\nDo dai cua string %d la : %d \n", i, s);
			}
		}
	}
	fclose(f);
	fclose(fo);
	return 0;
}
