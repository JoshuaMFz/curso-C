#include <stdio.h>

int main()
{
    int age;
    printf("Digite sua idade: ");
    scanf("%d", &age);

    printf("Sua idade é: %d", age);
    return 0;
}

int main()
{
    float score1, score2, score3;
    printf("Digite suas notas: ");
    scanf("%f %f %f", &score1, &score2, &score3);
    float result = (score1 + score2 + score3) / 3;
    printf("Sua média é: %f", result);
    return 0;
}