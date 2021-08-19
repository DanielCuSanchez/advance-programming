#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 255

//Daniel Cu Sánchez - A01703613

int factorial(int n)
{
	if(n == 0)
		return 1;
	return n * factorial(n-1);
}

int main()
{
	int result_factorial = 0;
	int n = 0;
	char* user_input;

	user_input = malloc( sizeof(char) * MAX_SIZE);
	printf("Enter a number\n");
	fgets(user_input, MAX_SIZE-1, stdin);
	n = atoi(user_input);

	result_factorial = factorial(n);

	printf("User input: %d \nFactorial: %d\n", n, result_factorial);

	return 0;
}
