#include <stdio.h>   // biblioteca padrão de entrada/saída
#include <stdlib.h>  // usada para funções como rand() e srand()
#include <time.h>    // usada para obter o tempo atual (time)

int main() {
    int numerosSorteados[6]; // vetor para armazenar os 6 números sorteados
    int i, j, numero, repetido; // variáveis auxiliares

    srand(time(NULL)); // inicializa o gerador de números aleatórios com base no tempo

    // laço para gerar 6 números aleatórios entre 1 e 60, sem repetições
    for(i = 0; i < 6; i++) {
        do {
            repetido = 0; // assume que o número ainda não foi repetido
            numero = rand() % 60 + 1; // gera número entre 1 e 60

            // verifica se o número já foi sorteado
            for(j = 0; j < i; j++) {
                if(numerosSorteados[j] == numero) {
                    repetido = 1; // marca como repetido
                    break; // sai do laço interno
                }
            }
        } while(repetido); // repete enquanto o número já tiver sido sorteado

        numerosSorteados[i] = numero; // armazena o número no vetor
    }

    // exibe os números sorteados
    printf("Numeros sorteados: ");
    for(i = 0; i < 6; i++) {
        printf("%d ", numerosSorteados[i]);
    }
    printf("\n");

    return 0; // indica que o programa terminou corretamente
}

