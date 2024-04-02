#include <stdio.h>

#define N 10

int main()
{
    int *vetor = (int *)malloc(N * sizeof(int));

    for (int laco = 0; laco < N; laco++)
    {
        vetor[laco] = 0;
        printf("%d", vetor[laco]);
    }

    free(vetor);
}