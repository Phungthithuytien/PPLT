#include <stdio.h>
#include <string.h>
#define SIZE 100
int getLength(const char*);
void reverse(const char* str)
{
	int i;
	for(i = getLength(str); i >= 0; i--)
	{
		printf("%c", str[i]);
	}
}
int main()
{
	char str[SIZE]; 
	printf("Enter string : ");
	fgets(str, SIZE, stdin);
	printf("String : %s\n", str);
	printf("String's length : %d", getLength(str));
	printf("\nString reverse order : ");
	reverse(str);
	return 0;
}
int getLength(const char* str)
{
	if(str[0] == '\0') return 0;
	int length = 0;
	while(str[length] != '\0')
	{
		length = length + 1;
	}
	return length - 1; 
}
