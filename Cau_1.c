#include <stdio.h>
int main()
{
	float R1, R2, L, h, Stp, V, S;
	scanf("%f", &R1);
	scanf("%f", &R2);
	scanf("%f", &L);
	scanf("%f", &h);		
	S = 3.14*(R1*R1 + R2*R2 + (R1 + R2)*L);
	V = ((3.1415*h)/3.0)*(R1*R1 + R2*R2 + R1*R2);
	printf("\n%0.4f", S);
	printf("\n%0.4f", V);
}
