#include <stdio.h> //Um chamamento de uma biblioteca, no caso o stdio.h(standard input-output header ou cabeçalho padrão de entrada/saída)

#define max 10// A #define define uma constante que será processando antes do compilador

//Criando uma função
int Funcao(int x, int y /*Declarando uma variável como argumento*/){
	
	//declaração de variáveis( int = inteiro; char = caractere; bool = true/false; float = flutuante/decimal)
	int z; //Variável local da Funcao()
	
	z = x +y ; // Atribuindo a uma variável uma equação
	
	return z;
}

//Criando uma função, passando um ponteiro como parâmetro
void modificarValor(int *ptr){
	*ptr = 20; // Estamos enviando ao endereço de memória um novo valor, por isso usamos *ptr, para modificar o valor no endereço de memória
}

//Função principal do programa
int main(){

	// Criando e Usando uma IFDEF e ENDIF
	// Primeiro se abre o ifdef e fecha o ciclo com endif, além de que ela é uma parte ignorada do código, sendo apenas executada por comando na execução do código, ou na confecção de seu #define
	// O comando para compilar o código com esse pré-processamento é "gcc programa.c -o programa -D(nome do ifdef)" o -D é de define
	#ifdef DEMO // Como faz parte do pré-processamento, iniciamos o ifdef com o nome dela ou caso tenhamos declarada ela em um #define
		printf("O código da define DEMO, foi processada antes do compilador\n");
	#endif
	
	//declarando variáveis
	int n1, n2, n3, i2;
	
	//chamando a função scanf da biblioteca stdio.h
	scanf("%d", &n1); // scanf("tipo da variável", &(de refenrenciamento)variável a ser lida ou scanf("", &);	
	scanf("%d", &n2);
	
	//chamando a função Funcao()
	Funcao(n1, n2);
	
	//Atribuindo a uma variável o resultado de uma função
	n3 = Funcao(n1, n2);
	
	//Chamando uma função da biblioteca stdio, a função printf()
	printf("x + y = %d \n", n3);
	
	//Fazendo um if, else, else if
	if(n3 >=5){ //Declara uma condicional( >, <, <=, >=, ==, !=)
		printf("Verdadeiro\n");
		
	}else if(n3 > 2){ //Cria mais uma condição dentro da condição estabelecida
		printf("Segunda Condicao atendida\n");
		
	}else /*Quando a condição não é atendida*/ {
		printf("Falso\n");
	}
	
	//Fazendo um lastro de repetição for
	for(int i = 0 /*Declarando uma variável de controle*/; i < n3/*Condicionando a repetição*/; i++ /*Fazendo um incremento fa variável de controle*/){
		printf("Loop feito com sucesso pela %d vez \n", i);
	}
	
	//Fazendo um lastro de repetição while
	while(i2 < n1){ //Usa de uma variável de controle pré-declarada a ela
	
		printf("Loop feito com sucesso pela %d vez\n", i2);
		i2++; //incremento da variável de controle
	}
	
	//Fazendo um lastro de repetição do/while
	do{//Comando que irá fazer de início uma repetição antes da condição
		
		printf("Loop feito com sucesso pela %d vez\n", i2);
		i2++; //Incremento da variável de controle
		
	}while(i2 < n2/*Condicional*/); //Usa de uma variável de controle pré-declarada a ela
	
	//Fazendo um switch
	scanf("%d", &n1);//Lendo uma variável para ser usada como condição
	
	//Declarando a função switch()
	switch(n1){ //Qual variável será usada para trazer uma resposta
	
		case 1: //Condição da escolha, case *valor desejado*: argumento lógico
			printf("Escolha 1 feita\n");
			break;//Comando que para a função
		
		case 2:
			printf("Escolha 2 feita\n");
			break;
		
		default: //É quando nenhuma escolha/condição for atendida no switch
			printf("Algum comando feito\n");
			break;
	}

	//Criando e usando um ponteiro
	int val = 10;
	int *ponteiro = &val; //* serve para transforma-lo em ponteiro, e estamos declarando uma variável ponteiro que aponta o endereço de valor, por isso usamos & para captar seu endereço

	printf("Valor de val: %d\n", val); //Valor da variável val
	printf("Endereco de val: %p\n", &val); //Endereço de memória da variável val
	printf("Valor armazenado no ponteiro: %p\n", ponteiro); // Valor da posição de memória apontado
	printf("Valor apontado por ponteiro: %d\n", *ponteiro); // Valor que está dentro do espaço de memória

	modificarValor(&val); // Passando o endereço de memória(&) da variável val, como argumento

	printf("Valor atual da variável val: %d", val);

	return 0; // faz com que o programa finalize com sucesso
}
