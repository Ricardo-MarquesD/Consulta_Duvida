#include <stdio.h>
#include <stdlib.h> // Chamando a biblioteca stdlib.h, para poder usar os recursos de alocação de memória

// Um construtor serve para criar um objeto/entidade, que possuem características, e para declara-lo, comece com struct nome_do_struct{características};
struct Construtor{

    // Esses são as características/atributos do constructor
    char *nome; // Criando um ponteiro do tipo char, para conseguir usar uma String, a depender do seu compilador um char nome[20] pode funcionar
    int idade;

};

// O typedef serve para criar um tipo de variável que não possui definição pela linguagem, e por isso é possível fazer um struct com ele, a diferença é o modo que declaramos ela, typedef struct{características}nome_do_struct;
typedef struct {

    // Esses são as características/atributos do constructor
    char *nome; // Criando um ponteiro do tipo char, para conseguir usar uma String, a depender do seu compilador um char nome[20] pode funcionar
    int idade;
    
}ConstrutorT;

int main() {
    
    struct Construtor c1; // Como criamos um objeto com o struct normal, struct nome_do_struct nome_do_objeto
    struct Construtor *ptc; // Forma como criamos um ponteiro do tipo struct, que aponta para o endereço de memória do struct criado

    ptc = &c1; // Passamos o endereço do objeto criado com o struct para manipular

    // Chamamos o objeto, e mexemos em suas características
    c1.nome = "Um nome";
    c1.idade = 2050;

    // Forma como printamos os atributos do objeto
    printf("\nPrint da variável nome do struct: %s\n", c1.nome);
    printf("Print da variável idade do struct: %d\n", c1.idade);

    // Printando os atributos do nosso objeto com o ponteiro
    printf("Nome: %s\n", ptc -> nome);
    printf("Idade: %d\n", ptc -> idade);

    // Forma de modificar o valor dos atributos do nosso objeto com o ponteiro
    ptc -> nome = "Novo nome";
    ptc -> idade = 22;

    // Novo print com os atributos mudados
    printf("Nome: %s\n", ptc -> nome);
    printf("Idade: %d\n", ptc -> idade);

    printf("============================================================================\n");

    // Mexendo no struct criado com o typedef
    ConstrutorT cT1; // Por conta que o typedef define um novo tipo, podemos chamar o nome da struct que chamamos sem precisar espicificar seu tipo
    ConstrutorT *ptcT; // Declaração de um ponteiro apontando para um typedef struct

    // O restante do código com o typedef struct, é identico ao do struct normal

    ptcT = &cT1;

    cT1.nome = "Nome com o outro struct";
    cT1.idade = 1025;

    printf("Print da variável nome do typedef struct: %s\n", cT1.nome);
    printf("Print da variável idade do typedef struct: %d\n", cT1.idade);

    printf("Nome: %s\n", ptcT -> nome);
    printf("Idade: %d\n", ptcT -> idade);

    ptcT -> nome = "Novo nome na variável do typedef struct";
    ptcT -> idade = 11;

    printf("Nome: %s\n", ptcT -> nome);
    printf("Idade: %d\n", ptcT -> idade);

    printf("============================================================================\n");
    // Alocação de memória
    // Alocação de memória com o malloc
    
    int *pont; // Declaração de um ponteiro que não foi inicializado, ou seja, com valor e endereço apontado indefinido
    int i; // Apenas uma variável para fazer contador(lastros de repetição)

    pont = (int *)malloc(10 * sizeof(int)); // Fazendo a inicialização do ponteiro com a alocação de memória malloc, a forma de inicia-la é: nome_ponteiro = (tipo de variável *)malloc(quantidade de espaços desejados * sizeof(tipo da variável))
    // O malloc é um alocador de memória que pega uma posição aleátoria na memória e armazena sua quantia

    // Faz uma verificação se a alocação foi feita com sucesso, pois não achou espaço para alocar
    if(pont == NULL){
        printf("Falha ao alocar memoria.\n");
        return 1;
    }

    // Um lastro for para colocar valor nos espaços de memória alocadas pelo malloc
    for(i = 0; i < 10; i++){
        pont[i] = i + 1; // Coloca um valor em uma posição que o ponteiro aponta, como uma array
    }

    // Apenas para a exibição dos valores alocados, como se fosse uma exibição de uma array
    printf("Exibicao dos valores do malloc: \n");
    for(i = 0; i < 10; i++){
        printf("%d ", pont[i]);
    }
    
    printf("\nEndereco apontado, na memoria, no malloc: %p\n", (void *)pont); // Mostra aonde o malloc alocou a memória que o ponteiro está apontando

    free(pont); // O free(), ele serve para que o programa não deixe um ponteiro pendurado na memória, e assim libere de forma rápida o espaço de memória que foi ocupado

    printf("============================================================================\n");
    // Alocação de memória com o calloc

    pont =  (int *)calloc(10, sizeof(int)); // Fazendo a inicialização do ponteiro com a alocação de memória calloc, a forma de inicia-la é: nome_ponteiro = (tipo_de_variável *)calloc(quantidade_de_espaços_desejados, sizeof(tipo_da_variável))
    // Faz uma verificação se a alocação foi feita com sucesso, pois não achou espaço para alocar
    if (pont == NULL)
    {
        printf("Falha ao alocar memoria.\n");
        return 1;
    }

    // Apenas para a exibição dos valores alocados, como se fosse uma exibição de uma array
    printf("Exibicao dos valores do calloc:"); 
    for(i = 0; i < 10; i++){
        printf("%d ", pont[i]);
    }

    printf("\nEndereco apontado, na memoria, no calloc: %p\n", (void *)pont); // Mostra aonde o malloc alocou a memória que o ponteiro está apontando

    free(pont); // O free(), ele serve para que o programa não deixe um ponteiro pendurado na memória, e assim libere de forma rápida o espaço de memória que foi ocupado

    printf("============================================================================\n");
    // Re-alocação de memória com o realloc

    pont = (int *)calloc(10, sizeof(int)); // O ponteiro pode ser neste caso inicializado, tanto pelo malloc, quanto pelo calloc, vai da sua escolha

    // Faz uma verificação se a alocação foi feita com sucesso, pois não achou espaço para alocar
    if (pont == NULL)
    {
        printf("Falha ao alocar memoria.\n");
        return 1;
    }

    // Apenas para a exibição dos valores alocados, como se fosse uma exibição de uma array
    printf("Exibicao dos valores do calloc:");
    for(i = 0; i < 10; i++){
        printf("%d ", pont[i]);
    }

    printf("\nEndereco apontado, na memoria, no calloc: %p\n", (void *)pont); // Mostra aonde o calloc alocou a memória que o ponteiro está apontando

    pont = (int *)realloc(pont, (10 * 3) * sizeof(int)); // Fazendo a re-alocação de memória do ponteiro com o realloc, a forma de inicia-la é: nome_ponteiro = (tipo_de_variável *)realloc(variável_ponteiro, (novo_tamnho) * sizeof(tipo_da_variável))

    // Faz uma verificação se a alocação foi feita com sucesso, pois não achou espaço para alocar
    if (pont == NULL)
    {
        printf("Falha ao alocar memoria.\n");
        return 1;
    }

    // Um lastro for para colocar novos valores aos espaços adicionados pelo realloc
    for(i = 0; i < 20; i++){
        pont[10+i] = i + 1; // Aqui começamos a adicionar valor a partir da primeira nova posição na memória
    }

    // Apenas para a exibição dos valores alocados mais as novas alocações, como se fosse uma exibição de uma array
    printf("Exibicao dos valores do calloc, que foi aumentado pelo realloc:");
    for(i = 0; i < 30; i++){
        printf("%d ", pont[i]);
    }

    printf("\nEndereco apontado, na memoria, modificada pelo realloc: %p\n", (void *)pont); // Mostra aonde o realloc alocou a memória que o ponteiro está apontando

    free(pont); // O free(), ele serve para que o programa não deixe um ponteiro pendurado na memória, e assim libere de forma rápida o espaço de memória que foi ocupado

    printf("============================================================================\n");

    return 0;
}
