#include <stdio.h>

#define SIZE 10

int main()
{
    int *vector = (int *)malloc(SIZE * sizeof(int));

    for (int loop = 0; loop < SIZE; loop++)
    {
        vector[loop] = 0;
        printf("%d", vector[loop]);
    }

    free(vector);
}