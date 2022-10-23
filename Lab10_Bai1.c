#include<stdio.h>
#include<math.h>

int main()
{
    float xA, xB, yA, yB;
    printf("Nhap xA : ");
    scanf("%f", &xA);
    printf("Nhap yA : ");
    scanf("%f", &yA);
    printf("Nhap xB : ");
    scanf("%f", &xB);
    printf("Nhap yB : ");
    scanf("%f", &yB);
    float d = sqrt(pow((xA - xB),2) + pow((yA - yB), 2));
    printf("Khoang cach giua 2 diem A, B la : %f", d);
    return 0;
}