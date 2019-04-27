#include <stdio.h>
#include <stdlib.h> //Koristi malloc

struct person
{
    char* name;
    int age;
};

int main() 
{
    struct person* myperson = malloc(sizeof(struct person));
    myperson->age = 18;
    myperson->name = "Johnny";

    printf("%s", myperson->name);

    // Free memory
    free(myperson);

    // Prints (null)
    printf("%s", myperson->name);

    return 0;
}