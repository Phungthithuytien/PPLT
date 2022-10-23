#include <stdio.h>
int main()
{
	char c;
	
	printf("Enter a character: ");
	
	scanf("%c", &c);
	
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	
		printf("%c is alphanumeric!", c);
		
	else 
	
		printf("%c is not alphanumeric!", c);
	
	return 0;
}

