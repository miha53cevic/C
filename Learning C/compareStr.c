#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) 
{
    if (strncmp(argv[1], "hello", strlen(argv[1])) == 0)
    {
        printf("Goodbye!\n");
    }
    else
    {
        printf("Where are your manners!\n");
    }

    return 0;
}