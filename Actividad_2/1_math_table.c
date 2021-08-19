#include <stdio.h>

int main() 
{
	int c = 0;
	for(int i = 1 ;  i < 11 ;  i++) 
	{
		printf("\t");
		for( int j = 1 ; j < 11 ;  j++)
		{
			if(c==0)
			{
				printf("[%d]  ---> ", i );
				c=1;
			}
			printf("%d ", i*j);
		}
		c=0;
		printf("\n");
	}
	return 0;
}
