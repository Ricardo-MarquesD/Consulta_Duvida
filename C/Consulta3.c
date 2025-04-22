#include <stdio.h>

#define MAX_LINES 2000 // Definindo um dado que possue um valor inteiro para determinar um tamanho

int main(){

    FILE *file; // Chamamos um dado do tipo FILE(significa que é um dado primitivo de manipulações de arquivo), e colocamos um ponteiro(obrigatório nesse caso) que vai passar apontando as posições dos elementos em um arquivo

    char palavras[MAX_LINES]; //Fazendo uma String com um dado do tipo char, damos um nome a variável e abrimos uma array, usando como tamanho da array a MAX_LINES que definimos anteriormente

    printf("MANIPULACOES DE ARQUIVO EM C\n");

    // Para começar a manipular um arquivo, precisamos atribuir ao ponteiro que criamos uma abertura para manipular o arquivo desejado, com o: ponteiro_do_file = fopen("nome_do_arquivo.txt/csv/etc", "modo_do_fopen") e encerramos a manipulação com o fclose(ponteiro_do_file)
    // O fopen() tem modos de abrir um arquivo, pode ser com o modo "r"(de read) que abre o arquivo para leitura, tem o "w"(de write) que abre o arquivo para escrever nele e tem o "a"(de append) que abre o arquivo no ultimo elemento do arquivo

    // Uso do modo r(read) do fopen(), e uso do fscanf()
    file = fopen("read.txt", "r");  // Abrindo o arquivo read.txt, com o fopen() no modo "r", para fazer a leitura

    if(file == NULL){ // Um if para verificar se o ponteiro do tipo FILE, encontrou um arquivo
        printf("Falha ao abrir arquivo 'read.txt'");
        return 1; // Finaliza o código de imediato
    }

    printf("Usando a funcao fscanf para ler o primeiro elemento/palavra no read.txt\n");

    fscanf(file, "%s", palavras); // Usando o método fscanf(), que lê no código apenas o primeiro elemento/palavra que existe em uma linha no arquivo.
    // Seu jeito de escrever é: fscanf(ponteiro_do_file, "tipo_de_dado", armazenamento)
    printf("Leitura da primeira palavra na linha, pelo fscanf: %s\n", palavras); // Após o preenchimento do fscanf() na string palavras, usamos o printf() para ver o conteúdo de palavras

    fclose(file); // Finaliza a manipulação de arquivo, para evitar penduramento de dados. O jeito de escreve-lo é: fclose(ponteiro_do_file)

    printf("=========================================================================\n");

    // Uso do modo r(read) do fopen() e o uso do fgets()
    file = fopen("read.txt", "r"); // Abrindo o arquivo read.txt, com o fopen() no modo "r", para fazer a leitura

    if(file == NULL){
        printf("Falha ao abrir arquivo 'read.txt'");
        return 1;
    }

    printf("\nUsando a funcao fgets para ler uma linha no read.txt\n");

    fgets(palavras, MAX_LINES, file); // Usando o método fgets(), que lê no código, uma linha inteira do arquivo escolhido.
    // Seu jeito de escrever é: fscanf(armazenamento, tamanho_do_dado, ponteiro_do_file)
    printf("Leitura da linha por completo usando o fgets: %s\n", palavras); // Após o preenchimento do fgets() na string palavras, usamos o printf() para ver o conteúdo de palavras

    fclose(file);
    
    // Uso do modo w(Write) do fopen e o uso do fprintf()
    file = fopen("write.txt", "w"); // Abrindo o arquivo write.txt, com o fopen() no modo "w", para fazer a impressão de novos dados no arquivo

    if(file == NULL){
        printf("Falha ao abrir arquivo %s", file);
        return 1;
    }

    fprintf(file, "Essa linha foi criada!"); //Usando o método fprintf(), que imprime no arquivo escolhido, e na posição de linha do ponteiro, um novo dado desejado, verifique o arquivo write.txt antes de executar o código e olhe de novo após rodar
    // Seu jeito de escrever é: fprintf(ponteiro_do_file, "tipo_de_dado") caso aja uma variável a ser instâciada, coloque o tipo e nome, como se fosse um printf(), exemplo: fprintf(file, "Nome: %s", nome)

    fclose(file);

    // Uso do modo a(append) do fopen
    file = fopen("append.txt", "a"); // Abrindo o arquivo read.txt, com o fopen() no modo "a", para fazer a leitura/impressão no ultimo elemento do arquivo

    if(file == NULL){
        printf("Falha ao abrir arquivo %s", file);
        return 1;
    }

    fprintf(file, "\nEssa linha foi adicionada no final do append.txt");

    fclose(file);

}