#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 256

int main()
{
	char* str1;
	char* str2;
	int cnt = -1;
	str1 = malloc(MAX_SIZE * sizeof(char));
	str2 = malloc(MAX_SIZE * sizeof(char));
	printf("Enter string #1\n");
	fgets(str1, MAX_SIZE ,stdin);

	printf("Enter string #2\n");
	fgets(str2, MAX_SIZE ,stdin);

	for(int i = 0; str1[i] != '\0' && str2[i] != '\0'; i++)
	{
		if (str1[i] == str2[i])
		{
			cnt++;
		}
	}
	printf("Number of exact letras:%d\n", cnt);
	return 0;
}
