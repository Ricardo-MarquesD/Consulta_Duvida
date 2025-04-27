#include <stdio.h>
#include <stdlib.h>
#include <time.h> // Biblioteca para manipular tempo

// Função para limpar a buffer
void buffree(){
    while (getchar() != '\n');
}

// Criando uma função timestamp
time_t getTime(){
    time_t t;

    t = time(NULL);

    return t;
}

int main(int argc, char const *argv[])
{
    time_t t; // Variável do tipo tempo a partir do unix epoch

    time(&t); // Função que pega o tempo atual de sua máquina
    printf("Current time is %ld\n", t);

    struct tm date = *localtime(&t); // A função localtime(), transforma o timestamp em valores padrões para data (DD/MM/AAAA HH/MM/SS)
    printf("Current date is %d-%02d-%02d\n", date.tm_year + 1900, date.tm_mon + 1, date.tm_mday);

    struct tm date2;

    // Fazendo a leitura de valores do usuário em relação ao tempo, e passando para o tm date2
    if(scanf("%d %d %d %d %d %d", &date2.tm_mday, &date2.tm_mon, &date2.tm_year, &date2.tm_hour, &date2.tm_min, &date2.tm_sec) != 6){
        buffree(); // Limpando a buffer
        printf("Entrada invalida. Tente novamente.\n");
    }
    printf("Current date from date 2 is %d %02d %02d %02d:%02d:%02d\n", date2.tm_mday, date2.tm_mon, date2.tm_year, date2.tm_hour, date2.tm_min, date2.tm_sec);

    // Formatando para o unix epoch
    date2.tm_mon -= 1;
    date2.tm_year -= 1900;

    time_t timestamp = mktime(&date2); // Função mktime transforma um tm(estrutura de tempo) em um timestamp
    printf("Current time is %ld\n", timestamp); // Printando um timestamp

    time_t t2 = getTime(); // Damos o valor da função getTime() que envia um time_t para a nossa variável time_t t2
    printf("Timestamp from getTime() function: %ld\n", t2);

    return 0;
}