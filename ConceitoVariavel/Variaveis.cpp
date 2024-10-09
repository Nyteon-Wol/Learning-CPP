#include <iostream>
#include <tchar.h>

int main()
{
	//Função que configura o console windows para mostrar acentos
	_tsetlocale(LC_ALL, _T("portuguese"));

	/*Declaração de variáveis
	Primeiro colocam qual o tipo de variável que desejamos que
	o computador crie ao executar nosso programa neste caso 
	escolhemos ambas como int (integer) ou seja o local
	da memória queestamos solicitando ao computador, deve ser capaz
	de armazenar números inteiros (-3, -2, -1, 0, 1, 2)
	Então int NumVidas pode ser lido da seguinte forma: 
	computador me fornece um local na memória RAM com tamanho suficiente 
	para armazenar um número inteiro e coloque o nome deste local como sendo NumVidas.*/
	int NumVidas = 5;
	/*Acima o computador irá alocar um espaço de memória do tipo inteiro
	depois vai até este local na ram e vai colocar o valor de 5
	000000A9C0BDF674 = 5*/
	int Pontuacao = 1350;
	/*Acima o computador irá alocar um espaço de memória do tipo inteiro
	depois vai até este local na ram e vai colocar o valor de 1350
	000000A9C0BDF694 = 1350*/
	std::cout << "********INICIO DO JOGO**********" << std::endl;
	std::cout << "Vidas Jogador: " << NumVidas << std::endl;
	std::cout << "Pontuação: " << Pontuacao << std::endl;
	std::cout << "Tamanho da variável NumVidas " << sizeof(NumVidas) << "Bytes " << "\n";
	std::cout << "Tamanho da variável Pontuacao " << sizeof(Pontuacao) << "Bytes " << "\n";
	std::cout << "Endereço que Numvidas Ocupa na Memória RAM: " << &NumVidas << "\n";
	std::cout << "Endereço que Pontuação Ocupa na Memória RAM: " << &Pontuacao << "\n";

	std::cout << "******************" << std::endl;

	std::cout << "********DURANTE O JOGO**********" << std::endl;

	Pontuacao = Pontuacao + 150; // Pontuacao += 150;
	/*Vá até a região de memória rotulada com o nome pontuacao e coloque agora a soma do
	valor que está contido nela mais 150
	Pontuacao = 1350 + 150;
	Pontuacao = 1500;*/
	NumVidas = NumVidas - 1; // NumVidas -= 1;
	/*Vá até a região de memória rotulada com o nome NumVidas e coloque agora a subtração 
	do	valor que está contido nela menos -1
	NumVidas = 5 - 1;
	NumVidas = 1500;*/
	std::cout << "Vidas Jogador: " << NumVidas << std::endl;
	std::cout << "Pontuacao: " << Pontuacao << std::endl;
	std::cout << "******************" << std::endl;

	system("PAUSE");
}