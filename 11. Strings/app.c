#include <stdio.h>
#include <string.h>

int main()
{
    char firstName[10] = "Joshua ", lastName[10];
    // strcpy(lastName, "Martins"); // Atribuindo string
    // strcat(firstName, lastName); // Concatenação
    if (strcmp(firstName, "Joshua ") == 0)
    {
        printf("Iguais");
    }
    else
    {
        printf("Diferentes");
    }
    printf("%s", firstName);
}