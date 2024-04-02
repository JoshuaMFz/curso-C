#include <stdio.h>
#define TAM 5

void main(void)
{
    float notas[TAM], busca;
    int n1, achou;
    printf("Digite as 5 notas: ");
    for (n1 = 0; n1 < TAM; n1++)
    {
        scanf("%f", &notas[n1]);
    }
    for (n1 = 0; n1 < TAM; n1++)
    {
        printf("%0.2f   ", notas[n1]);
    }

    printf("Informe um valor para busca: ");
    scanf("%f", &busca);

    achou = 0;
    for (n1 = 0; n1 < TAM; n1++)
    {
    if (busca == notas[n1])
        achou = 1;
        break;
    }
    if (achou)
        printf("\nSim");
    else
        printf("\nNao");
} 


void imprime(int *vetor) { // Necessário ponteiro pra imprimir o VALOR ou []
    int laco;
    for (laco = 0; laco < 5; laco++) {
        printf("\n%d", vetor[laco]);
    }
}

void inicializar(int *vetor) { // Necessário ponteiro pra imprimir o VALOR ou []
    int laco;
    for (laco = 0; laco < 5; laco++) {
        vetor[laco] = 0;
        printf("%d", vetor[laco]);
    }
}

void main(void) {
    int vetor[5] = { 1, 2, 3, 4, 5};
    imprime(vetor);
    inicializar(vetor);
}
