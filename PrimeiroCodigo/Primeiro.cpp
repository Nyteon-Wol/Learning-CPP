#include <iostream>
//A diretiva de pré-processador #include
//indica para incluir o arquivo de cabeçalho
//iostream


int main()
//função principal. Todo programa C++ começa com essa função
//com esta função principal main()
{ // chaves
	//{ indica o início de um bloco
	//cout comando de saída de dados
	//deste caso está solicitando para colocar na saída
	//padrão(tela) a frase especificada
	std::cout << "Primeiro Codigo" << std::endl;
	// endl indica para inserir um caracter de quebra de linha
	//na frase ("string)
	system("PAUSE");
	system("COLOR 5F");
	//chama o shell do windows(DOS)
	//e coloca o comando "PAUSE"
	return 0;
	//retorna para o sistema operacional zero
	//zero é o padrão  informar que tudo deu certo!
	//assim se a função main der certo ela retornará 0(zero)
}
// } indica o final de um bloco

//CTRL + SHIFT + B = Compilar o código fonte
//CTRL + F5 = Executar o programa
//ALT + SHIFT + <ENTER> = Máximizar/Minizar janela
//CTRL + K + C = Comentar o código selecionado
//CTRL + C no final da linha = Copia e cola toda a linha
//sem precisar selecionar toda a linha!