#include <stdio.h>

// Variáveis do tipo ponteiro armazena o endereço de memória, identificamos variáveis do tipo ponteiro com um * ou &

int main()
{
    int numeroQualquer;
    int *ponteiro; // Armazena o endereço de memória

    numeroQualquer = 5;
    ponteiro = &numeroQualquer;

    *ponteiro = 15;

    printf("%d, %d", numeroQualquer, *ponteiro);
}

//------------------------------

int quadrado(int num1)
{
    return num1 * num1;
}

int main()
{
    int numeroAoQuadrado = 20;
    numeroAoQuadrado = quadrado(numeroAoQuadrado); // Chamando a função e utilizando PASSAGEM DE PARÂMETRO POR VALOR
    printf("%d", numeroAoQuadrado);
}

// ------------------------------

void funcaoQuadrado(int *num1)
{
    *num1 = (*num1) * (*num1);
}

int main()
{
    int num2 = 100;
    funcaoQuadrado(&num2); // Passagem de parâmetro por REFERÊNCIA.
    printf("%d", num2);
    return 0;
}

// -------------- Anotações:

int main()
{
    int *ponteiro1;
    int num1 = 42;

    ponteiro1 = &num1;
    printf("%d", *ponteiro1);
}
