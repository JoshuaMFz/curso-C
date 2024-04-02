#include <stdio.h>
#define SIZE 5

void main(void)
{
    float score[SIZE], search;
    int loop, find;
    printf("Digite as 5 notas: ");
    for (loop = 0; loop < SIZE; loop++)
    {
        scanf("%f", &score[loop]);
    }
    for (loop = 0; loop < SIZE; loop++)
    {
        printf("%0.2f   ", score[loop]);
    }

    printf("Informe um valor para busca: ");
    scanf("%f", &search);

    find = 0;
    for (loop = 0; loop < SIZE; loop++)
    {
        if (search == score[loop])
            find = 1;
        break;
    }
    if (find)
        printf("\nSim");
    else
        printf("\nNao");
}

void functionPrint(int *vector)
{ // Necessário ponteiro pra imprimir o VALOR ou []
    int loop;
    for (loop = 0; loop < 5; loop++)
    {
        printf("\n%d", vector[loop]);
    }
}

void functionBoot(int *vector)
{ // Necessário ponteiro pra imprimir o VALOR ou []
    int loop;
    for (loop = 0; loop < 5; loop++)
    {
        vector[loop] = 0;
        printf("%d", vector[loop]);
    }
}

void main(void)
{
    int vector[5] = {1, 2, 3, 4, 5};
    functionPrint(vector);
    functionBoot(vector);
}
