#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 255

//Daniel Cu Sánchez - A01703613

int main()
{
	char* name_to_greeting;
	name_to_greeting = malloc(sizeof(char)*MAX_SIZE);
	printf("Please enter your name\n");
	fgets(name_to_greeting, MAX_SIZE-1, stdin);
	printf("Hello %s", name_to_greeting);

	return 0;
}
