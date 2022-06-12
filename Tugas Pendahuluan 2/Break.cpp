#include <stdio.h>

int main(void)
{
    int i = 1;
    while (i <= 10)
    {
        if (i == 5)
        {
            break;
        }
        printf("%i + %i = %i \n", i,i,i+i);
        i++;
    }
    return 0;
}