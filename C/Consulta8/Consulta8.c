#include <stdlib.h>
#include <stdio.h>
#include "consul.h" // Chamando a biblioteca que criei
#include <time.h>

int main(int argc, char const *argv[]){
    srand(time(NULL));

    // Inicializando um Tad
    Tad var;
    Tad var2[3] = {};

    // Atribuindo valor para var, usando a função random_tad para gerar um Tad aleatório
    var = random_tad(var);
    // Criando dentro da array var2, uma quantidade limite e valores aleatórios usando a função que cria uma array do tipo Tad
    create_tad_block(var2, sizeof(var2)/sizeof(var2[0]));

    printf("Tad var:\nValue: %d\nE: %d\n\n", var.value, var.e);

    // Pritando var2
    printf("Tad var2[]:\n");
    for(int i = 0; i < 3; i++){
        printf("Tad var2[%d]:\nValue: %d\nE: %d\n\n", i, var2[i].value, var2[i].e);
    }
    
    // Pritando a var2 depois de ter sido limpada pela função free_tad()
    free_tad(var2, sizeof(var2)/sizeof(var2[0]));
    printf("Tad var2[]:\n");
    for(int i = 0; i < 3; i++){
        printf("Tad var2[%d]:\nValue: %d\nE: %d\n\n", i, var2[i].value, var2[i].e);
    }

    return 0;
}
