#include <stdio.h>

struct Construtor{

    char *nome;
    int idade;

};

typedef struct {

    char *nome;
    int idade;
    
}ConstrutorT;

int main() {

    struct Construtor c1;
    struct Construtor *ptc;

    ptc = &c1;

    c1.nome = "Um nome";
    c1.idade = 2050;

    printf("Print da variável nome do struct: %s\n", c1.nome);
    printf("Print da variável idade do struct: %d\n", c1.idade);

    printf("Nome: %s\n", ptc -> nome);
    printf("Idade: %d\n", ptc -> idade);

    ptc -> nome = "Novo nome";
    ptc -> idade = 22;

    printf("Nome: %s\n", ptc -> nome);
    printf("Idade: %d\n", ptc -> idade);

    printf("============================================================================");

    ConstrutorT cT1;
    ConstrutorT *ptcT;

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

    return 0;
}
