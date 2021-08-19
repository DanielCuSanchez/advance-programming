
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 256

int main()
{
	char* str;
	int vowl = 0;
	int cons = 0;
	str = malloc(MAX_SIZE * sizeof(char));
	printf("Enter a word\n");
	fgets(str, MAX_SIZE ,stdin);
	for(;*str != '\0'; str++)
	{
		if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o'|| *str == 'u')
			vowl++;
		else if(*str != '\n')
			cons++;
	}
	printf("Number of vowls:%d\nNumber of cons:%d\n", vowl, cons);
	return 0;
}
