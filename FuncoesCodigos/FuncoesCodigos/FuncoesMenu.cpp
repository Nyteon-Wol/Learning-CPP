#include <iostream>
#include <locale.h>
#include "FuncoesMenu.h"
// #include usando <> faz ele procurar o #include no diretorio padr�o
// j� usando "" ele procura no diretorio atual do programa

// Neste arquivo C++ diz como as fun��es do ".h" deve ser implementado e coloca
// todos que devem ser usados

// Fun��o ExibirMenu, que exibe o menu de op��es
void ExibirMenu()  // Implementa��o correta
{
    setlocale(LC_ALL, "portuguese");
    int escolha = 0;  // Declara��o da vari�vel escolha
    do // as instru��es abaixo ser�o executadas pelo menos uma vez!
    {
        std::cout << "****Tickets Cinema****" << std::endl;
        std::cout << "\n1 - Para Meia Entrada\n";
        std::cout << "\n2 - Para Inteira\n";
        std::cout << "\n3 - Sair\n";

        // A fun��o RetornarEscolha() retorna a escolha do usu�rio
        escolha = RetornarEscolha();

        // Processa a escolha chamando a fun��o ProcessarEscolha com a vari�vel escolha como argumento
        ProcessarEscolha(escolha);
    } while (escolha != 3); // Enquanto escolha for diferente de 3, o menu reaparece
}

int RetornarEscolha()
{
    int escolha = 0;
    std::cout << "\nEscolha sua op��o: ";
    std::cin >> escolha;
    return escolha;
}

int ProcessarEscolha(int TipoEscolha)
{
    switch (TipoEscolha)
    {
    case 1:
        std::cout << "\nTicket Meia Entrada Comprada\n";
        break;
    case 2:
        std::cout << "\nTicket Inteira Comprado\n";
        break;
    case 3:
        std::cout << "\nSaindo Menu Tickets...\n";
        break;
    default:
        std::cout << "\nOp��o Inv�lida!!!\n";
    }
    return TipoEscolha;
}
