#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define TAM 100

//Função que cria um array com valores aleatórios sem repetição:

void cria_aleatorio(int *vetor){
    bool loop, aux;
    for(int i = 0; i < TAM; i++){
        vetor[i] = rand() % ((2 * TAM) + 1);
        if(i != 0){
            loop = true;
            while(loop){
                aux = true;
                for(int j = 0; j < i; j++){
                    if(vetor[j] == vetor[i]){
                        vetor[i] = rand() % ((2 * TAM) + 1);
                        aux = false;
                    }
                }
                if(aux){
                    loop = false;
                }
            }
        }
    }
}

//Função que imprime o vetor:

void imprime_vetor(int *vetor){
    for(int i = 0; i < TAM; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

//Função main:

int main(void){
    srand((unsigned)time(NULL));
    int vetor[TAM];
    cria_aleatorio(vetor);
    printf("Vetor criado:\n\n");
    imprime_vetor(vetor);
    return 0;
}
