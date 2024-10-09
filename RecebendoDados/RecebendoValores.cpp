#include <iostream>

int main()
{
    int Numero01, Numero02;
    bool Comparacao;

    std::cout << "Digite o primeiro numero: ";
    std::cin >> Numero01;

    std::cout << "Numero01 = " << Numero01 << std::endl;

    std::cout << "Digite o segundo numero: ";
    std::cin >> Numero02;

    std::cout << "Numero02 = " << Numero02 << "\n";
    Comparacao = (Numero01 == Numero02);
    std::cout << "Numero01 igual a Numero02?: " << Comparacao << "\n";
    Comparacao = (Numero01 != Numero02);
    std::cout << "Numero01 diferente de Numero02?: " << Comparacao << "\n";
    Comparacao = (Numero01 > Numero02);
    std::cout << "Numero01 Maior que Numero02?: " << Comparacao << "\n";
    Comparacao = (Numero01 < Numero02);
    std::cout << "Numero01 Menor que Numero02?: " << Comparacao << "\n";
    Comparacao = (Numero01 >= Numero02);
    std::cout << "Numero01 Maior ou igual a Numero02?: " << Comparacao << "\n";
    Comparacao = (Numero01 <= Numero02);
    std::cout << "Numero01 Menor ou igual a Numero02?: " << Comparacao << "\n";
    system("PAUSE");
    return 0;
}
