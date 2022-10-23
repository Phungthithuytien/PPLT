#include <stdio.h> 
int main()
 {
     int a, b;

     printf("Nhap hai so a, b: ");

     scanf("%d%d", &a, &b);
	 
	 if(a>b)
	 
		printf("%d lon hon %d", a, b);
		
	 else
	 
		printf("%d lon hon %d", b, a);
		
	 return 0;
 }