#include <stdio.h>
#include <stdlib.h>

struct sData{
    int x;
    int y;
};

enum eData{
    VALOR1, VALOR2, VALOR3
};

typedef enum{
    BYTE,
    EDDRESS,
    VALUE
}Type;

typedef struct{
    int valor;
    Type type;
}Data;

int main(int argc, char const *argv[]){
    struct sData sD;
    sD.x = 12;
    sD.y = 3;
    printf("|Struct|\nX = %d\nY = %d\n", sD.x, sD.y);

    struct sData *sdata = &sD;
    sdata->x = 10;
    sdata->y = 15;
    printf("|Ponteiro de Struct|\nX = %d\nY = %d\n\n", sdata->x,sdata->y);

    enum eData ed = VALOR1;
    printf("|Enum|\nResultado: %d\n", ed);
    
    enum eData *edata = &ed;
    *edata = VALOR2;
    printf("|Ponteiro de Enum|\nResultado: %d\n\n", ed);

    Data data;
    data.valor = 12;
    data.type = BYTE;

    printf("|Struct com Enum|\n");
    switch (data.type){
    case BYTE: printf("Quantos bytes Data tem: %d", sizeof(data.valor)); break;
    case EDDRESS: printf("Endereco de Data: %p", &data.valor); break;
    case VALUE: printf("Valor da variavel em Data: %d", data.valor); break;
    default: printf("Falha na execucao."); break;
    }
    
}

