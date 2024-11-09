#include <iostream>
#include <locale.h>

// Protótipos das funções
void ExebirMenu();
int RetornarEscolha();
void ProcessarEscolha(int TipoEscolha);

int main()
{
	// Exibe o menu chamando a função ExebirMenu
	ExebirMenu();
	system("PAUSE");
	return 0;
}

// Função ExebirMenu, que exibe o menu de opções
void ExebirMenu()
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

void ProcessarEscolha(int TipoEscolha)
{
	switch (TipoEscolha)
	{
	case 1: std::cout << "\nTicket Meia Entrada Comprada\n";
		break;
	case 2: std::cout << "\nTicket Inteira Comprado\n";
		break;
	case 3: std::cout << "\nSaindo Menu Tickets...\n";
		break;
	default: std::cout << "\nOpção Inválida!!!\n";
	}
}
