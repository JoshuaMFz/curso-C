#include <stdio.h>

int fat(int num) // Fatorial
{
    if (num <= 1)
        return num; // Caso base!
    else
        return num * fat(num - 1); // Função Recursiva ()
}

float pot(int num1, int num2) // Potencia
{
    if (num2 == 0)
        return 1;
    else if (num2 < 0)
        return 1 / ((float)num1) * pot(num1, num2 + 1);
    else
        return num1 * pot(num1, num2 - 1);
}

int main()
{
    int num1;
    int num2;
    printf("Digite dois números :");
    scanf("%d %d", &num1, &num2);
    printf("A potenciacao de %d por %d eh %f", num1, num2, pot(num1, num2));
    return 0;
}