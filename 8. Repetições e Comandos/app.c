#include <stdio.h>

// int main()
// {
//     int n = 0;
//     int i = 1;
//     scanf("%d", &n);
//     while (i <= n) // Enquanto - Condição validada no início do código.
//     {
//         printf("%d", i);
//         i++;
//     }

//     for (i = 1; i <= n; i++) // Para
//     {
//         printf("%d", i);
//     }

//     printf("\nFim!");
//     return 0;
// }

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
