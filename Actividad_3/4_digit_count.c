#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 256

int main()
{
	char* str;
	int dig = 0;
	str = malloc(MAX_SIZE * sizeof(char));
	printf("Enter a word\n");
	fgets(str, MAX_SIZE ,stdin);
	for(;*str != '\0'; str++)
	{
		if(*str >= 48 && *str <= 57)
			dig++;
	}
	printf("Number of digits:%d\n", dig);
	return 0;
}
