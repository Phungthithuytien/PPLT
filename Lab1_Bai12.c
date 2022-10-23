#include <stdio.h> 
int main()
 {
     int a, b, c;

     printf("Nhap 3 goc cua tam giac a, b, c : ");

     scanf("%d%d%d", &a, &b, &c);
	 
	 if(a+b+c==180)
	 
		printf("\nBa goc %d %d %d tao duoc 1 tam giac", a, b, c);
		
	 else
	 
		printf("\nBa goc %d %d %d khong tao duoc 1 tam giac", a, b, c);
		
	 return 0;
 }
		
	 