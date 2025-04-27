#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Criando uma função do tipo inteiro para um número aleatório.
int novoNumero(int num){
    srand(num);
    int a = rand();
    
    return a;
}

int main(int argc, char const *argv[]){
    int valor;
    // rand()
    int a = rand(); // Função rand gera um número aleatório, mas é bom lembrar que uma vez iniciado o número gerado não muda em relação a variável. Formato: rand(valor_inteiro).
    printf("Numero gerado: %d\n", a);

    // srand()
    srand(42); // Gerando uma semente nova para que na função rand(), seja gerado um número novo. Formato: srand(valor_inteiro).
    a = rand();
    printf("Numero gerado: %d\n", a);

    // Fazendo um número aleatório via função.
    printf("Digite um valor para a semente do srand(): ");
    scanf("%d", &valor);
    printf("Numero gerado: %d\n", novoNumero(valor));

    // Estabelecendo um limite para a aleatoriedade.
    a = rand() % 10; // o % 10 permite dizer que o máximo que a pode assumir é 10 ou modulos de 10.
    printf("Numero gerado: %d\n", a);
    
    return 0;
}
