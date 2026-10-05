#include <stdio.h>
#include <stdlib.h>

#define stampf printf
#define TRUE 1
#define FALSE 0

void caricaVet(int *v, int *dim);
void stampaVet(int *v, int *dim);
void isPalindromo(int *v, int *dim);

int main(void){
    int *pV;
    int *dim;
    srand(time(0));

    dim = (int*) malloc(sizeof(int));

    printf("Inserisci dimensione array > ");
    scanf("%d", dim);

    pV = (int*) malloc(sizeof(int) * (*dim));

    caricaVet(pV, dim);
    stampaVet(pV, dim);
    isPalindromo(pV, dim);
    
}

void caricaVet(int *v, int*dim){
    int *i = (int*)malloc(sizeof(int));
    for(*i=0; *i < *dim; *i++){
        *(v+*i) = rand()%10+1;
    }
}


void stampaVet(int *v, int*dim){
    int *i = (int*)malloc(sizeof(int));
    for(*i=0; *i < *dim; *i++){
        stampf("v[%d]: %d", *i, *(v+*i));
    }
}

void isPalindromo(int *v, int *dim){
    
}