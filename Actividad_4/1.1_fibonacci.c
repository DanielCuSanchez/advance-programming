#include <stdlib.h>
#include <stdio.h>

void calc_fib(long long *arr, int n)
{
	*arr = 0;
	if ( n == 0 ) 
		return;
	*(arr++) = 1;
	if ( n == 1 )
		return;
	arr++;
	for(int i = 2; i<=n; i++)
	{
		*(arr++) = *(arr-1) + *(arr-2);
	}
}

int main()
{
	long long *arr = malloc(sizeof(long long) * 100);
	int n = 100;
	calc_fib(arr, n);
	printf("\nFibonacci numbers:");
	for(int i = 2; i<100; i++)
		printf("%lu ", arr[i]);
	printf("\n");
	return 0;
}
