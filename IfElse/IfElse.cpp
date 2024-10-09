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

    /* Se a senha digitada pelo usu�rio e armazenada na vari�vel
       "SenhaDigitada" for igual a senha de acesso, as instru��es ap�s o if ser�o
       executadas pois a condi��o foi verdadeira (true, 1) */
    if (SenhaDigitada == SenhaDeAcesso)
    {
        std::cout << "\nAcesso Permitido!" << "\n";
        // indica que o acesso foi concedido atrav�s de outra vari�vel booleana
        bAcesso = true;
        system("PAUSE");
    }
    /* Se a condi��o for falsa, ent�o as instru��es do else ser�o executadas */
    else
    {
        std::cout << "\nAcesso Negado!!!" << "\n";
        system("PAUSE");
        exit(0); // fecha o programa
    }

    bFezSol = false;
    bCarroPronto = false;
    bSalarioDepositado = false;
    /*Aqui podemos deixar apenas a vari�vel
    n�o � necess�rio == pois ser� buscado o valor de bAcesso e ficar� assim:
    if (true) ou if(false)*/
    if (bAcesso)
    {
        if (bFezSol || bCarroPronto || bSalarioDepositado)
        {
            std::cout << "\nVai dar praia!!!" << std::endl;
        }
        /*aqui ser� executado se a condi��o do if falhar e se
        bSalarioDepositado for false
        da mesma forma aqui
        como bSalarioDepositado � falso !(n�o) falso dar� true e ai entra no else
        if*/
        else if (!bSalarioDepositado )
        {
            std::cout << "N�o vai dar praia!!!" << std::endl;
        }
    }
    else
    {
        std::cout << "N�o vai dar praia!!!" << "\n";
    }
    return 0;
}
