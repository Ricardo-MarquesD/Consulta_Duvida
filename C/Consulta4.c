#include <stdio.h>
#include <stdlib.h> // Para usar o malloc
#include <string.h> // Biblioteca de funções para manipular strings

int main(){

    char texto1[] = "Texto 1"; // Uma variável que é uma array de char, coletania de caracteres. É modificavel.
    char* texto2 = "Texto 2"; // Essa variável aponta para um local na mémoria que tenha a frase "Texto 2", e por tanto é uma string literal e não modificavel.
    char* texto3 = (char*)malloc(20); // Essa variável aponta dinamicamente para um região da mémoria que armazenará algo, portanto, modificavel.
    free(texto3);

    // Ver tamanho de uma String
    strlen(texto1); // Retorna a quantidade de letras antes do \0, que é 7.
    strnlen(texto1, 2); // Retornará 2, poís limitamos ele ler até 2 elementos antes do \0.

    printf("%d\n", strlen(texto1));
    printf("%d\n", strnlen(texto1, 2));

    // Clonando Strings
    strcpy(texto1, "Jorje"); // Clona uma string para algum local, formato: strcpy(local, string); no caso do strncpy é: strncpy(loca, string, tamanho);
    printf("%s\n", texto1);
    for(int i = 0; i < sizeof(texto1)-1; i++) texto1[i] =  ' '; // Zerando o texto1 para usar de novo.
    strncpy(texto1, "Jorje", 3); // Clonará apenas o "Jor" dentro da variável, por conta do tamanho definido.
    printf("%s\n", texto1);
    
    // Concatenando Strings
    char textoC1[30] = "Ola, ";
    char textoC2[] = "individuo! ";

    strcat(textoC1, textoC2); // Ele adiciona uma string a uma variável, formato: strcat(variável, string);
    printf("%s\n", textoC1); // Resultado "Olá, individuo! ".

    strncat(textoC1, textoC2, sizeof(textoC1) - strlen(textoC1) - 1); // Ele adiciona uma string a uma variável, determinando se tem espaço, formato: strncat(variável, string, espaço_sobrando);
    printf("%s\n", textoC1); // Resultado "Olá, individuo! individuo! ".

    // Comparação de strings
    int var = strcmp("palavra", "palavras"); // O strcmp irá comparar string com string, dando resultado positivou ou negativo, neste caso negatico, formato: strcmp(string,string).
    int var2 = strncmp("palavra", "palavras", 7); //O strncmp irá comparar string com string a partir de um determinado tamanho, neste caso resultado positivo, formato strcmp(string,string, tamanho).

    printf("%d\n", var); // Resultado: -1
    printf("%d\n", var2); // Resultado: 0

    // Procurar substrings
    strchr("banana", 'n'); // Busca uma substring a partir de um caractere
    strstr("programador", "gram"); // Busca uma substring a partir de uma string

    printf("%s\n", strchr("banana", 'n')); // Resultado: nana
    printf("%s\n", strstr("programador", "gram")); // Resultado: gramador

    return 0;
}
