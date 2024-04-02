#include <stdio.h>

// ------------ Variável Global:

int variableGlobal = 5; // Evitar usar variáveis globais a não ser que seja extremamente necessário para função não sofrer efeito colateral

void functionVariableGlobal()
{
    variableGlobal++;
}

int funcaoPure(int x, int y)
{
    return x / y; // Função Pura! Seus retorno não é alterado, não sofre efeito colateral
}

int funcaoNotPure(int x, int y)
{
    return x / variableGlobal; // Sofre efeitos colaterais!
}

int main()
{
    functionVariableGlobal();
    printf("%d", variableGlobal);
    return 0;
}

// --------------------- Variável Estática:

void functionVariableStatic()
{
    static int called1 = 0; // Static faz com que ela permaneça com seu valor e não volte a 0.
    called1++;              // A cada vez que esta função for chamada, irá somar um!
    printf("%d", called1);
}

int main()
{
    functionVariableStatic();
    functionVariableStatic();
    functionVariableStatic();
    functionVariableStatic();
}

// Variavel Macro:

#define SIZE 30 // Valor não pode ser alterado, é uma variável constante!

void functionVariableMacro()
{
    int num1;
    num1 = SIZE * 3;
    printf("%d", num1);
}

int main()
{
    functionVariableMacro();
}