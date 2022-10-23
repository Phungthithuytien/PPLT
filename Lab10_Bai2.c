#include<stdio.h>
#include<math.h>
#define pi 3.14

int main()
{
    float P;
    printf("Nhap vao chu vi hinh tron : ");
    scanf("%f", &P);
    float S = pow((P/(2*pi)), 2)*pi;
    printf("Dien tich hinh tron co chu vi %f la %f", P, S);
    return 0;
}