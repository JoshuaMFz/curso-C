#include <stdio.h>

int main()
{
    // Variáveis!

    int nameVariable = 123;          // Guarda números inteiros
    char anotherVariavel = "a";      // Guarda um character ou pequenos números (-128 até 127 - 1byte.)
    float decimalVariable = 123.321; // Guarda números decimais

    unsigned char anyVariavel = 0256;  // Número sem sinal, ou seja (0 até 256)
    short int shortNumber = 31.000;    // Guarda pequenos números
    long int longNumber = 10000000000; // Guarda grandes números

    unsigned short int notNegativeNumber = 65.535; // Guarda número pequeno sem sinal!

    // Operadores Aritméticos

    int additionOperator, subtractOperator, divisionOperator, multiplicationOperator, restOfDivisionOperator;

    additionOperator = 10 + 10;       // Soma
    subtractOperator = 10 - 10;       // Subtração
    divisionOperator = 10 / 10;       // Divisão
    multiplicationOperator = 10 * 10; // Multiplicação
    restOfDivisionOperator = 10 % 3;  // Resto da Divisão

    // Operadores de Atribuição

    int operatorOfAtribuition;

    operatorOfAtribuition += 5; // Variável = Variável + 5
    operatorOfAtribuition -= 5; // Variável = Variável - 5
    operatorOfAtribuition *= 5; // Variável = Variável * 5
    operatorOfAtribuition /= 5; // Variável = Variável / 5

    // Operadores Lógicos e Relacionais

    int operatorRelational;
    int operatorLogic;

    operatorRelational < 1;  // Variável menor que 1
    operatorRelational > 1;  // Variável maior que 1
    operatorRelational >= 1; // Variável menor ou igual a 1
    operatorRelational <= 1; // Variável maior ou igual a 1
    operatorRelational == 1; // Variável igual a 1
    operatorRelational != 1; // Variável diferente de 1

    operatorLogic && 1; // E (and)
    operatorLogic || 1; // Ou (or)
    !operatorLogic;     // Não (not)

    // Retorno Booleano!

    return 0;
}