#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 255

int main()
{
	char* name_to_greeting;
	name_to_greeting = malloc(sizeof(char)*MAX_SIZE);

	printf("Please enter your name\n");
	fgets(name_to_greeting, MAX_SIZE-1, stdin);

	if(strcmp(name_to_greeting, "Juan\n") == 0 || strcmp(name_to_greeting, "Ana\n") == 0)
		printf("Hello %s", name_to_greeting);
	else
		printf("INVALID NAME: You are not Juan or Ana\n");

	return 0;
}
