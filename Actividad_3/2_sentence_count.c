#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 256

int main()
{
	char* str;
	int cnt = 1;
	str = malloc(MAX_SIZE * sizeof(char));
	printf("Enter a word\n");
	fgets(str, MAX_SIZE ,stdin);

	if (*str == '\n')
		cnt--;

	for(;*str != '\0'; str++)
	{
		if (*str != '\n')
		{
			if (*str == ' ')
				cnt++;
		}
	}
	printf("Number of words:%d\n", cnt);
	return 0;
}
