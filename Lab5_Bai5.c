#include<stdio.h>
#include<string.h>

int main() {
   char str1[100];
   char str2[100];
   char str3[100];
   int len;
 
   printf("\nNhap chuoi 1:\n");
   gets(str1);
 
   printf("\nNhap chuoi 2:\n");
   gets(str2);
 
   strcpy(str3, str1);
   strcat(str3, str2);
 
   printf("\n\nNoi chuoi: %s", str3);
 
   return (0);
}
