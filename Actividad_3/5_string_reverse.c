#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 256

int cnt_str(char *str)
{
	int cnt = 0;
	for(; *str != '\0'; str++)
		cnt++;
	return cnt;
}

int main()
{
	char* str1;
	char* str2;
	str1 = malloc(MAX_SIZE * sizeof(char));
	str2 = malloc(MAX_SIZE * sizeof(char));
	printf("Enter string #1\n");
	fgets(str1, MAX_SIZE ,stdin);
	int size = cnt_str(str1);
	int cnt = size - 1; // Se le quita 1 para no tomar en cuenta '\0'
	int i=0;
	for(; i<size; i++)
	{
		str2[i] = str1[cnt];
		cnt--;
	}
	str2[i] = '\0';

	printf("Your string reversed:%s \n", str2);
	return 0;
}
