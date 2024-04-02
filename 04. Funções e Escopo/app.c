#include <stdio.h>

float numberGreater(float num1, float num2) // Função que retorna o número maior!
{
    if (num1 > num2)
        return num1;
    else
        return num2;
}

int main() // Pode usar os mesmos nomes de variáveis pois estão em escopo diferentes e isso não interfere!
{
    float num1 = 17.32, num2 = 15.32, result;
    result = numberGreater(num1, num2); // Chamando a função, passando a ordem dos parâmetros
    printf("%f", result);
    // Reaproveitamento de Código:
    float num3 = 1.32, num4 = 5.32, result2;
    result2 = numberGreater(num3, num4); // Chamando a função passando a ordem dos parâmetros.
    printf("\n%f", result2);

    return 0;
}

// -----

void printNumberGreather(float num1, float num2) // Função que imprime o número maior sem retornar nenhum valor de fato!
{
    if (num1 > num2)
        printf("%f", num1);
    else
        printf("%f", num2);
}

int main()
{
    float num1 = 13.11, num2 = 12.11;
    printNumberGreather(num1, num2);
}
