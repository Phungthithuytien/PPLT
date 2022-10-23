#include <stdio.h> 
int main()
 {
     int a, b, c;

     printf("Nhap ba so a, b, c : ");

     scanf("%d%d%d", &a, &b, &c);
	 
	 int M=a; 
	 
	 if(M<b)
	 
		M=b;
	 
	 if(M<c)
	 
		M=c;
	 
	 printf("\nSo lon nhat trong 3 so %d, %d, %d la : %d", a, b, c, M);
		
	 return 0;
 }
