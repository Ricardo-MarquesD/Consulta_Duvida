#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "consul.h" // Chamando a biblioteca, no caso interface, que criei

// Implementando como funciona a função create_tad_block()
void create_tad_block(Tad tad[], int size){
    for(int i = 0; i < size; i++){
        tad[i] = random_tad(tad[i]); 
    }
}

// Implementando como funciona a função free_tad()
void free_tad(Tad tad[], int size){
    for(int i = 0; i < size; i++){
        tad[i].value = 0;
        tad[i].e = 0;
    }
}

// Implementando como funciona a função random_tad()
Tad random_tad(Tad tad){
    tad.value = rand() % 10;
    tad.e = rand() % 2;

    return tad;
}