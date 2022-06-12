#include <stdio.h>
int main()
{
    for(int i=0; i<10; i++)
    {
        if(i==6)
        {
            break;
        }
        printf("%d", i); //output 0, 1, 2, 3, 4, 5
    }
}