#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 255

//Daniel Cu Sánchez - A01703613

int main()
{
	int result_sum = 0;
	int n		= 0;
	char* user_input;

	user_input = malloc(sizeof(char)*MAX_SIZE);
	printf("Enter a number\n");
	fgets(user_input, MAX_SIZE-1, stdin);
	n = atoi(user_input);

	for(int i = 1 ; i <= n ; i++ ){
        result_sum += i;
	}

	printf("The sum of the numbers: %d\n", result_sum);

	return 1;
}
