#include <stdio.h> // Biblioteca padrão de entrada e saída

#define MAX 10 // Define uma constante processada antes da compilação

// Função que retorna a soma de dois números
int soma(int x, int y) {
    return x + y;
}

// Função que modifica o valor de uma variável através de um ponteiro
void modificarValor(int *ptr) {
    *ptr = 20; // Modifica o valor armazenado no endereço apontado
}

int main() {
    #ifdef DEMO
        printf("O código da define DEMO foi processado antes do compilador\n");
    #endif

    int n1, n2, n3;

    // Entrada de dados
    printf("Digite dois números inteiros: ");
    scanf("%d %d", &n1, &n2);

    // Chamando a função e exibindo o resultado
    n3 = soma(n1, n2);
    printf("Soma: %d\n", n3);

    // Condicionais
    if (n3 >= 5) {
        printf("Maior ou igual a 5\n");
    } else if (n3 > 2) {
        printf("Maior que 2\n");
    } else {
        printf("Menor ou igual a 2\n");
    }

    // Laço de repetição for
    for (int i = 0; i < n3; i++) {
        printf("Loop for: %d\n", i);
    }

    // Laço de repetição while
    int i2 = 0;
    while (i2 < n1) {
        printf("Loop while: %d\n", i2);
        i2++;
    }

    // Laço do-while
    do {
        printf("Loop do-while: %d\n", i2);
        i2++;
    } while (i2 < n2);

    // Estrutura switch
    printf("\nDigite um número (1 ou 2): ");
    scanf("%d", &n1);

    switch (n1) {
        case 1:
            printf("Escolha 1 feita\n");
            break;
        case 2:
            printf("Escolha 2 feita\n");
            break;
        default:
            printf("Escolha inválida\n");
            break;
    }

    // Uso de ponteiros
    int val = 10;
    int *ponteiro = &val;

    printf("\nValor de val: %d\n", val);
    printf("Endereço de val: %p\n", &val);
    printf("Valor armazenado no ponteiro: %p\n", ponteiro);
    printf("Valor apontado por ponteiro: %d\n", *ponteiro);

    modificarValor(&val);
    printf("Novo valor de val: %d\n", val);

    return 0;
}
