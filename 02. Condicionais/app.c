#include <stdio.h>

int main()
{
    int num1 = 9;
    int num2 = 3;

    if (num2 == 0) // Se
    {
        printf("O valor de B não pode ser igual a zero!");
    }
    else if (num1 % num2 == 0) // Senão se
    {
        printf("Sim!");
    }
    else // Senão
    {
        printf("Não!");
    }
}

int main()
{
    char number = 15;
    switch (number)
    {
    case 1: // Caso 1
        printf("um");
        break;
    case 2: // Caso 2
        printf("dois");
        break;
    case 3: // Caso 3
        printf("tres");
        break;
    case 4: // Caso 4
        printf("quatro");
        break;
    case 5: // Caso 5
        printf("cinco");
        break;
    default: // Se nenhum dos casos:
        printf("Não cadastrado!");
        break;
    }
}