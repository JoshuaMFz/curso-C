#include <stdio.h>

float maiorNumero(float a, float b) // Função que retorna o número maior!
{
    float x;
    if (a > b)
        return a;
    else
        return b;
}

int main() // Pode usar os mesmos nomes de variáveis pois estão em escopo diferentes e isso não interfere!
{
    float a = 17.32, b = 15.32, x;
    x = maiorNumero(a, b); // Chamando a função, passando a ordem dos parâmetros
    printf("%f", x);
    // Reaproveitamento de Código:
    float c = 1.32, d = 5.32, y;
    y = maiorNumero(c, d); // Chamando a função passando a ordem dos parâmetros.
    printf("\n%f", y);

    return 0;
}

// -----

void imprimeMaiorNumero(float num1, float num2) // Função que imprime o número maior sem retornar nenhum valor de fato!
{
    if (num1 > num2)
        printf("%f", num1);
    else
        printf("%f", num2);
}

int main()
{
    float a = 13.11, b = 12.11;
    imprimeMaiorNumero(a, b);
}
