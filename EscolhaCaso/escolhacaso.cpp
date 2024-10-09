#include <iostream>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "portuguese");
	int Num1, Num2;
	char Operacao;
	std::cout << "Digite um Numero: ";
	std::cin >> Num1;
	std::cout << "Digite outro Numero: ";
	std::cin >> Num2;
	std::cout << "Qual Operação deseja efetuar? \n+ Adição \n- Subtração \
		\n * Multiplicação\n/Divisão?";
	std::cout << "\nDigite sua opção: ";
	std::cin >> Operacao;
	/*O usuario vai digitar um caracter. Como um caracter é mapeado como inteiro da
	tabela ASCII o switch este tipo de espressão. Logo Operacao pode ser + - * ou / */
	switch (Operacao)
	{
	case '+':
		std::cout << "\nSoma de Num1 + Num2 = " << Num1 + Num2;
		break;
	case '-':
		std::cout << "\nSubtração de Num1 - Num2 = " << Num1 - Num2;
		break;
	case '*':
		std::cout << "\nMultiplicação de Num1 * Num2 = " << Num1 * Num2;
		break;
	case '/':
		std::cout << "\nDivisão de Num1 / Num2 = " << Num1 / Num2;
		break;
		/*Caso Operador não tenha um valor de nenhum destes casos + - * ou /
		você pode colocar de forma opcional um valor que padrão(default) que será
		executado se nenhum dos casos sejam válidos */
	default:
		std::cout << "\nVocê não digitou um operador valido! ";
		break;
	}
	std::cout << "\n";
	system("PAUSE");
}