#include <stdio.h>

int main()
{
    // Variáveis!

    int nomedaVariavel = 123;         // Guarda números inteiros
    char outraVariavel = "a";         // Guarda um character ou pequenos números (-128 até 127 - 1byte.)
    float VariavelDecimais = 123.321; // Guarda números decimais

    unsigned char algumaVariavel = 0256; // Número sem sinal, ou seja (0 até 256)
    short int a = 31.000;                // Guarda pequenos números
    long int a = 10000000000;            // Guarda grandes números

    unsigned short int c = 65.535; // Guarda número pequeno sem sinal!

    // Operadores Aritméticos

    int operadoresAritmeticos;

    operadoresAritmeticos = 10 + 10; // Soma
    operadoresAritmeticos = 10 - 10; // Subtração
    operadoresAritmeticos = 10 / 10; // Divisão
    operadoresAritmeticos = 10 * 10; // Multiplicação
    operadoresAritmeticos = 10 % 3;  // Resto da Divisão

    // Operadores de Atribuição

    int operadoresAtribuição;

    operadoresAtribuição += 5;
    operadoresAtribuição -= 5;
    operadoresAtribuição *= 5;
    operadoresAtribuição /= 5;

    // Operadores Lógicos e Relacionais

    int operadoresRel;
    int operadoresLog;

    operadoresRel < 1;  // Menor
    operadoresRel > 1;  // Maior
    operadoresRel >= 1; // Maior ou Igual
    operadoresRel <= 1; // Menor ou Igual
    operadoresRel == 1; // Igual
    operadoresRel != 1; // Diferente

    operadoresLog && 1; // E
    operadoresLog || 1; // Ou
    !operadoresLog;     // Not

    // Retorno Booleano!

    return 0;
}