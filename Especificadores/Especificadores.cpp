#include <iostream>
#include <tchar.h>

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));

	/*Você pode usar ( ) para iniciar variáveis com valores
	literais { } é inicialização uniforme, permite tanto iniciar
	tanto valores literais (int, float, caractere) quando valores escalares (vetores, enums etc)*/
	int NumeroInteiro{ 12 };
	float NumeroReal{ 34.56f };
	char Caractere{ 'c' };
	//String é uma cadeira de caracteres, é um texto e deve estar entre aspas duplas "textos da string
	//para declarar uma string usamos std::string
	std::string Texto{ "Vou aprender C++ e descobrir o lado sombrio da força!" };
	/*% d indica que você quer que seja colocado na string :
	"Valor Número Inteiro = %d " o valor da variável
	Numero inteiro */
	std::printf("Valor Número Inteiro = %d - Real: %.2f - Caractere: %c - Texto: %s \n", 
		NumeroInteiro, NumeroReal, Caractere, Texto.c_str());
	std::cout << "Texto da String: " << Texto << "\n";
	std::printf("O Valor do Caractere Digitado %c na Tabela ASCII é: %d \n", Caractere, Caractere);

	/*
	%d Número decimal inteiro (int).
	%f Número decimal de ponto flutuante. serve tanto para float como para double.
	%lf Serve para double. (l-long , f-float - lf)
	%c Caractere: imprime o caractere que tem o código ASCII Correspondente ao valor dado.
	%s Sequência de caracteres (string, em inglês).
	*/ 

	system("PAUSE");
	return 0;

}