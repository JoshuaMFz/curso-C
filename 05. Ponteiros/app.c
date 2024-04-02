#include <stdio.h>

// Variáveis do tipo ponteiro armazena o endereço de memória, identificamos variáveis do tipo ponteiro com um * ou &

int main()
{
    int anyNumber;
    int *pointer; // Armazena o endereço de memória

    anyNumber = 5;
    pointer = &anyNumber;

    *pointer = 15;

    printf("%d, %d", anyNumber, *pointer);
}

//------------------------------

int square(int num1)
{
    return num1 * num1;
}

int main()
{
    int numberToSquared = 20;
    numberToSquared = square(numberToSquared); // Chamando a função e utilizando PASSAGEM DE PARÂMETRO POR VALOR
    printf("%d", numberToSquared);
}

// ------------------------------

void functionSquared(int *num1)
{
    *num1 = (*num1) * (*num1);
}

int main()
{
    int num2 = 100;
    functionSquared(&num2); // Passagem de parâmetro por REFERÊNCIA.
    printf("%d", num2);
    return 0;
}

// -------------- Anotações:

int main()
{
    int *pointer;
    int num1 = 42;

    pointer = &num1;
    printf("%d", *pointer);
}
