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
	char* str;
    int count = 0;
	str = malloc(MAX_SIZE * sizeof(char));
	printf("Enter string #1\n");
	fgets(str, MAX_SIZE ,stdin);
	int size = cnt_str(str);
	size = size - 1;
	int i=0;
	for(; i<size/2; i++)
	{
		if(str[i]==str[size-i-1])
    	count++;
	}
	if(count==i)
 	    printf("Is a palindrome");
    else
        printf("Is not palindrome"); 
    return 0;
}
