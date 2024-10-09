#include <iostream>
#include <tchar.h>

int main()
{
	//Fun��o que configura o console windows para mostrar acentos
	_tsetlocale(LC_ALL, _T("portuguese"));

	/*Declara��o de vari�veis
	Primeiro colocam qual o tipo de vari�vel que desejamos que
	o computador crie ao executar nosso programa neste caso 
	escolhemos ambas como int (integer) ou seja o local
	da mem�ria queestamos solicitando ao computador, deve ser capaz
	de armazenar n�meros inteiros (-3, -2, -1, 0, 1, 2)
	Ent�o int NumVidas pode ser lido da seguinte forma: 
	computador me fornece um local na mem�ria RAM com tamanho suficiente 
	para armazenar um n�mero inteiro e coloque o nome deste local como sendo NumVidas.*/
	int NumVidas = 5;
	/*Acima o computador ir� alocar um espa�o de mem�ria do tipo inteiro
	depois vai at� este local na ram e vai colocar o valor de 5
	000000A9C0BDF674 = 5*/
	int Pontuacao = 1350;
	/*Acima o computador ir� alocar um espa�o de mem�ria do tipo inteiro
	depois vai at� este local na ram e vai colocar o valor de 1350
	000000A9C0BDF694 = 1350*/
	std::cout << "********INICIO DO JOGO**********" << std::endl;
	std::cout << "Vidas Jogador: " << NumVidas << std::endl;
	std::cout << "Pontua��o: " << Pontuacao << std::endl;
	std::cout << "Tamanho da vari�vel NumVidas " << sizeof(NumVidas) << "Bytes " << "\n";
	std::cout << "Tamanho da vari�vel Pontuacao " << sizeof(Pontuacao) << "Bytes " << "\n";
	std::cout << "Endere�o que Numvidas Ocupa na Mem�ria RAM: " << &NumVidas << "\n";
	std::cout << "Endere�o que Pontua��o Ocupa na Mem�ria RAM: " << &Pontuacao << "\n";

	std::cout << "******************" << std::endl;

	std::cout << "********DURANTE O JOGO**********" << std::endl;

	Pontuacao = Pontuacao + 150; // Pontuacao += 150;
	/*V� at� a regi�o de mem�ria rotulada com o nome pontuacao e coloque agora a soma do
	valor que est� contido nela mais 150
	Pontuacao = 1350 + 150;
	Pontuacao = 1500;*/
	NumVidas = NumVidas - 1; // NumVidas -= 1;
	/*V� at� a regi�o de mem�ria rotulada com o nome NumVidas e coloque agora a subtra��o 
	do	valor que est� contido nela menos -1
	NumVidas = 5 - 1;
	NumVidas = 1500;*/
	std::cout << "Vidas Jogador: " << NumVidas << std::endl;
	std::cout << "Pontuacao: " << Pontuacao << std::endl;
	std::cout << "******************" << std::endl;

	system("PAUSE");
}