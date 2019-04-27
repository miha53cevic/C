#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[10];
    int age;
} Person;

void setPersonInfo(Person* new)
{
    printf("Enter your name: ");
    scanf("%s", new->name);

    printf("Enter your age: ");
    scanf("%d", &new->age);
}

int main(int argc, char* argv[])
{
    Person newPerson;
    setPersonInfo(&newPerson);

    printf("Hello %s great age you have %d\n", newPerson.name, newPerson.age);

    return 0;
}