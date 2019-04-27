#include <stdlib.h>
#include <stdio.h>

int main()
{
    int n = 10;
    int* array = (int*) malloc(n * sizeof(int));
    
    for (int i = 0; i < n; i++)
    {
        array[i] = i + 1;
    }

    printf("%d", array[0]);

    return 0;
}