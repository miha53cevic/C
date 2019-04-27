#include <stdio.h>
#include <string.h>

int main()
{
    char string[256];
    scanf("%s", string);
    printf("String length = %ld\n", strlen(string));

    return 0;
}