#include <iostream>
/*Para usar #define, precisa ser depois dos includes*/
//#define NUM_VIDAS 10
//Observe que não tem ; no final de #define NUM_VIDAS 10


int main()
{
	const int NUM_VIDAS = 10;
	int TotalDeVidas;
	TotalDeVidas = NUM_VIDAS - 1;
	std::cout << "Total de Vidas: " << TotalDeVidas << "\n";
	std::cout << "Valor Constante NUM_VIDAS: " << NUM_VIDAS << "\n";
	std::cout << "Endereço de Memória de NUM_VIDAS: " << &NUM_VIDAS << "\n";
	system("PAUSE");
}