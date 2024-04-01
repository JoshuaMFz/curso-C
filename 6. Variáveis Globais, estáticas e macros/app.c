#include <stdio.h>

// ------------ Variável Global:

int variavelGlobal = 5; // Evitar usar variáveis globais a não ser que seja extremamente necessário para função não sofrer efeito colateral

void funcaoVariavelGlobal()
{
    variavelGlobal++;
}

int funcaoPura(int x, int y)
{
    return x / y; // Função Pura! Seus retorno não é alterado, não sofre efeito colateral
}

int funcaoNaoPura(int x, int y)
{
    return x / variavelGlobal; // Sofre efeitos colaterais!
}

int main()
{
    funcaoVariavelGlobal();
    printf("%d", variavelGlobal);
    return 0;
}

// --------------------- Variável Estática:

void funcaoVariavelEstatica()
{
    static int chamada1 = 0; // Static faz com que ela permaneça com seu valor e não volte a 0.
    chamada1++;              // A cada vez que esta função for chamada, irá somar um!
    printf("%d", chamada1);
}

int main()
{
    funcaoVariavelEstatica();
    funcaoVariavelEstatica();
    funcaoVariavelEstatica();
    funcaoVariavelEstatica();
}

// Variavel Macro:

#define TAMANHO 30 // Valor não pode ser alterado, é uma variável constante!

void funcaoVariavelMacro()
{
    int x;
    x = TAMANHO * 3;
    printf("%d", x);
}

int main()
{
    funcaoVariavelMacro();
}