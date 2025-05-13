#include <stdio.h>   // biblioteca padr�o de entrada/sa�da
#include <stdlib.h>  // usada para fun��es como rand() e srand()
#include <time.h>    // usada para obter o tempo atual (time)

int main() {
    int numerosSorteados[6]; // vetor para armazenar os 6 n�meros sorteados
    int i, j, numero, repetido; // vari�veis auxiliares

    srand(time(NULL)); // inicializa o gerador de n�meros aleat�rios com base no tempo

    // la�o para gerar 6 n�meros aleat�rios entre 1 e 60, sem repeti��es
    for(i = 0; i < 6; i++) {
        do {
            repetido = 0; // assume que o n�mero ainda n�o foi repetido
            numero = rand() % 60 + 1; // gera n�mero entre 1 e 60

            // verifica se o n�mero j� foi sorteado
            for(j = 0; j < i; j++) {
                if(numerosSorteados[j] == numero) {
                    repetido = 1; // marca como repetido
                    break; // sai do la�o interno
                }
            }
        } while(repetido); // repete enquanto o n�mero j� tiver sido sorteado

        numerosSorteados[i] = numero; // armazena o n�mero no vetor
    }

    // exibe os n�meros sorteados
    printf("Numeros sorteados: ");
    for(i = 0; i < 6; i++) {
        printf("%d ", numerosSorteados[i]);
    }
    printf("\n");

    return 0; // indica que o programa terminou corretamente
}

