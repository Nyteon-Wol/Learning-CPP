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
	std::cout << "Qual Opera��o deseja efetuar? \n+ Adi��o \n- Subtra��o \
		\n * Multiplica��o\n/Divis�o?";
	std::cout << "\nDigite sua op��o: ";
	std::cin >> Operacao;
	/*O usuario vai digitar um caracter. Como um caracter � mapeado como inteiro da
	tabela ASCII o switch este tipo de espress�o. Logo Operacao pode ser + - * ou / */
	switch (Operacao)
	{
	case '+':
		std::cout << "\nSoma de Num1 + Num2 = " << Num1 + Num2;
		break;
	case '-':
		std::cout << "\nSubtra��o de Num1 - Num2 = " << Num1 - Num2;
		break;
	case '*':
		std::cout << "\nMultiplica��o de Num1 * Num2 = " << Num1 * Num2;
		break;
	case '/':
		std::cout << "\nDivis�o de Num1 / Num2 = " << Num1 / Num2;
		break;
		/*Caso Operador n�o tenha um valor de nenhum destes casos + - * ou /
		voc� pode colocar de forma opcional um valor que padr�o(default) que ser�
		executado se nenhum dos casos sejam v�lidos */
	default:
		std::cout << "\nVoc� n�o digitou um operador valido! ";
		break;
	}
	std::cout << "\n";
	system("PAUSE");
}