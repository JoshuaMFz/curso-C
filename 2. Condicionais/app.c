#include <stdio.h>

// int main()
// {
//     int a = 9;
//     int b = 3;

//     if (b == 0)
//     {
//         printf("O valor de B não pode ser igual a zero!");
//     }
//     else if (a % b == 0)
//     {
//         printf("Sim!");
//     }
//     else
//     {
//         printf("Não!");
//     }
// }

int main()
{
    char n = 15;
    switch (n)
    {
    case 1:
        printf("um");
        break;
    case 2:
        printf("dois");
        break;
    case 3:
        printf("tres");
        break;
    case 4:
        printf("quatro");
        break;
    case 5:
        printf("cinco");
        break;
    default:
        printf("Não cadastrado!");
        break;
    }
}