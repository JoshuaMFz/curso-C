#include <stdio.h>

int main()
{
    int n = 0;
    int loop = 1;
    scanf("%d", &n);
    while (loop <= n) // Enquanto - Condição validada no início do código.
    {
        printf("%d", loop);
        loop++;
    }

    for (loop = 1; loop <= n; loop++) // Para
    {
        printf("%d", loop);
    }

    printf("\nFim!");
    return 0;
}

int main()
{
    int num;
    scanf("%d", &num);

    do // Entra obrigatoriamente no loop.
    {
        if (num < 4)
            break; // Sai imediatamente do loop.
        printf("%d", num);
        num++;
    } while (num < 15); // Condição validada somente no final do código
}
