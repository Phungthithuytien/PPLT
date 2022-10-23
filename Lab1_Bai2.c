#include <stdio.h> 
int main()
 {

     int a, b, tong, hieu, tich, thuong, phandu;

     printf("Nhap a, b: ");

     scanf("%d%d", &a, &b);

     tong = a+b;

     hieu = a-b;

     tich = a*b;

     thuong = a/b;
	 
	 phandu = a%b;

     printf("phep cong: %d\nphep tru: %d\nphep nhan: %d\nphep chia: %d\nphandu: %d", tong, hieu, tich, thuong, phandu);
	 
	 return 0;
	 
 }
