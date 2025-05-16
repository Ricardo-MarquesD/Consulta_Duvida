#ifndef CONSUL_H // Evita a biblioteca ser chamada mais de um vez
#define CONSUL_H // Executa a biblioteca
    // Criando a enum chamada Enum
    typedef enum{
        ESTADO_1,
        ESTADO_2
    }Enum;

    // Criando a struct chamada Tad
    typedef struct {
        int value;
        Enum e; // chamando a enum
    }Tad;

    // Declarando as funções da biblioteca
    void create_tad_block(Tad tad[], int size);
    void free_tad(Tad tad[], int size);
    Tad random_tad(Tad tad);
#endif