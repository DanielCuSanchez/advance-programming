#include <stdio.h>

int main() {
    int i, i2, count;

    printf(" Prime Number from 0 to 100 are: \n");
    for(i2 = 0; i2 <= 100; i2++)
    {
        count = 0;
        for (i = 2; i <= i2/2; i++)
        {
            if(i2%i == 0)
            {
                count++;
                break;
            }
        }
        if(count == 0 && i2 != 1 )
        {
            printf(" %d ", i2);
        }
    }
    return 0;
}
