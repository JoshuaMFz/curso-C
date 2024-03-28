#include <stdio.h>

// int main()
// {
//     int idade;
//     printf("Digite sua idade: ");
//     scanf("%d", &idade);

//     printf("Sua idade é: %d", idade);
//     return 0;
// }

int main()
{
    float a, b, c;
    printf("Digite suas notas: ");
    scanf("%f %f %f", &a, &b, &c);
    float result = (a + b + c) / 3;
    printf("Sua média é: %f", result);
    return 0;
}