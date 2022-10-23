#include <stdio.h> 

int main()
{
     float a, b, c, d, e; 
     printf("Nhap diem 5 mon hoc Ly, Hoa, Sinh, Toan, Tin : ");
     scanf("%f%f%f%f%f", &a, &b, &c, &d, &e);

	 float t=((a+b+c+d+e)/50)*100;
	 printf("\nTong diem : %f\n", t);
	 if(t<=40)
		printf("Hang F"); 
	 else
	 {
		if(60>=t)
			printf("Hang E");	
		else
		{
			if(70>=t)
				printf("Hang D");
			else
			{
				if(80>=t)
					printf("Hang C");
				else
				{
					if(90>=t)
						printf("Hang B");
					else
					{
						if(t>90)
							printf("Hang A");
					}

				}
			}
		}
	 }
	 return 0;
}	 
		
	 
	 
