#include <iostream>
#include <locale.h>
#include "FuncoesMenu.h"
// #include usando <> faz ele procurar o #include no diretorio padrão
// já usando "" ele procura no diretorio atual do programa

// Neste arquivo C++ diz como as funções do ".h" deve ser implementado e coloca
// todos que devem ser usados

// Função ExibirMenu, que exibe o menu de opções
void ExibirMenu()  // Implementação correta
{
    setlocale(LC_ALL, "portuguese");
    int escolha = 0;  // Declaração da variável escolha
    do // as instruções abaixo serão executadas pelo menos uma vez!
    {
        std::cout << "****Tickets Cinema****" << std::endl;
        std::cout << "\n1 - Para Meia Entrada\n";
        std::cout << "\n2 - Para Inteira\n";
        std::cout << "\n3 - Sair\n";

        // A função RetornarEscolha() retorna a escolha do usuário
        escolha = RetornarEscolha();

        // Processa a escolha chamando a função ProcessarEscolha com a variável escolha como argumento
        ProcessarEscolha(escolha);
    } while (escolha != 3); // Enquanto escolha for diferente de 3, o menu reaparece
}

int RetornarEscolha()
{
    int escolha = 0;
    std::cout << "\nEscolha sua opção: ";
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
        std::cout << "\nOpção Inválida!!!\n";
    }
    return TipoEscolha;
}
