#include <stdio.h>

int fat(int num)
{
    if (num <= 1)
        return num; // Caso base!
    else
        return num * fat(num - 1); // Função Recursiva ()
}

float pot(int x, int y)
{
    if (y == 0)
        return 1;
    else if (y < 0)
        return 1 / ((float)x) * pot(x, y + 1);
    else
        return x * pot(x, y - 1);
}

int main()
{
    int x;
    int y;
    printf("Digite dois números :");
    scanf("%d %d", &x, &y);
    printf("A potenciacao de %d por %d eh %f", x, y, pot(x, y));
    return 0;
}