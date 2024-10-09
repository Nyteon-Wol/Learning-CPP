#include <iostream>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int escolha = 0;
	do
	{
		std::cout << "****Tickets Cinema****" << std::endl;
		std::cout << "\n1 - Para Meia Entrada\n";
		std::cout << "\n2 - Para Inteira\n";
		std::cout << "\n3 - Sair";
		std::cout << "\nEscolha sua opção: ";
		std::cin >> escolha;

		switch (escolha)
		{
		case 1: std::cout << "\nMeia Entrada Comprada\n";
			break;
		case 2: std::cout << "\nTicket Inteira Comprado\n";
			break;
		case 3: std::cout << "\nSaindo Menu Tickets...\n";
			break;
		default: std::cout << "\nOpção Inválida!!!\n";

		}

	} while (escolha != 3);
	system("PAUSE");
	return 0;
}