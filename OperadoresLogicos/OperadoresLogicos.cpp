#include <iostream>
#include <tchar.h>

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));
	double Numero;
	bool ResultadoLogico;
	bool ResultadoLogico2;
	std::cout << "Digite um Numero : ";
	std::cin >> Numero;
	std::cout << "True = 1 e False = 0" << "\n";
	ResultadoLogico = (Numero > 100);
	/*A variável booleana MaiorQue100 irá receber
	o valor lógico da comparação (Numero > 100)
	Numero é maior que cem?*/
	ResultadoLogico = ((Numero > 100) && (Numero != 0));
	std::cout << "O resultado lógico da expressão ((Numero > 100) && (Numero != 0)) é: "
		<< ResultadoLogico
		<< std::endl;
	ResultadoLogico = ((Numero == 100) || (Numero > 200)) && (Numero < 1000);
	std::cout << "O resultado lógico da expressão ((Numero > 100) && (Numero != 0)) é: "
		<< ResultadoLogico2
		<< std::endl;
	system("PAUSE");
}