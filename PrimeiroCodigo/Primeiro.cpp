#include <iostream>
//A diretiva de pr�-processador #include
//indica para incluir o arquivo de cabe�alho
//iostream


int main()
//fun��o principal. Todo programa C++ come�a com essa fun��o
//com esta fun��o principal main()
{ // chaves
	//{ indica o in�cio de um bloco
	//cout comando de sa�da de dados
	//deste caso est� solicitando para colocar na sa�da
	//padr�o(tela) a frase especificada
	std::cout << "Primeiro Codigo" << std::endl;
	// endl indica para inserir um caracter de quebra de linha
	//na frase ("string)
	system("PAUSE");
	system("COLOR 5F");
	//chama o shell do windows(DOS)
	//e coloca o comando "PAUSE"
	return 0;
	//retorna para o sistema operacional zero
	//zero � o padr�o  informar que tudo deu certo!
	//assim se a fun��o main der certo ela retornar� 0(zero)
}
// } indica o final de um bloco

//CTRL + SHIFT + B = Compilar o c�digo fonte
//CTRL + F5 = Executar o programa
//ALT + SHIFT + <ENTER> = M�ximizar/Minizar janela
//CTRL + K + C = Comentar o c�digo selecionado
//CTRL + C no final da linha = Copia e cola toda a linha
//sem precisar selecionar toda a linha!