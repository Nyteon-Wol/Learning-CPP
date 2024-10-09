#include <iostream>
#include <string>
#include <tchar.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    bool bFezSol, bCarroPronto, bSalarioDepositado;
    bool bAcesso;
    std::string SenhaDeAcesso = "cmaismais";
    std::string SenhaDigitada;

    std::cout << "Digite a senha de acesso: ";
    std::cin >> SenhaDigitada;

    /* Se a senha digitada pelo usuário e armazenada na variável
       "SenhaDigitada" for igual a senha de acesso, as instruções após o if serão
       executadas pois a condição foi verdadeira (true, 1) */
    if (SenhaDigitada == SenhaDeAcesso)
    {
        std::cout << "\nAcesso Permitido!" << "\n";
        // indica que o acesso foi concedido através de outra variável booleana
        bAcesso = true;
        system("PAUSE");
    }
    /* Se a condição for falsa, então as instruções do else serão executadas */
    else
    {
        std::cout << "\nAcesso Negado!!!" << "\n";
        system("PAUSE");
        exit(0); // fecha o programa
    }

    bFezSol = false;
    bCarroPronto = false;
    bSalarioDepositado = false;
    /*Aqui podemos deixar apenas a variável
    não é necessário == pois será buscado o valor de bAcesso e ficará assim:
    if (true) ou if(false)*/
    if (bAcesso)
    {
        if (bFezSol || bCarroPronto || bSalarioDepositado)
        {
            std::cout << "\nVai dar praia!!!" << std::endl;
        }
        /*aqui será executado se a condição do if falhar e se
        bSalarioDepositado for false
        da mesma forma aqui
        como bSalarioDepositado é falso !(não) falso dará true e ai entra no else
        if*/
        else if (!bSalarioDepositado )
        {
            std::cout << "Não vai dar praia!!!" << std::endl;
        }
    }
    else
    {
        std::cout << "Não vai dar praia!!!" << "\n";
    }
    return 0;
}
