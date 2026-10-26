#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

void VisualizzaMenu();
void isPalindroma();
void Concatena();

int main(void){
    int* scelta;
    scelta = (int*)malloc(sizeof(int));
    do{
        VisualizzaMenu();
        scanf("%d", scelta);

        system("@cls||clear");

        fflush(stdin);

        switch(*scelta){
            case 1:
                printf("Inserisci stringa: ");
                isPalindroma();
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                Concatena();
                break;
            case 0:
                printf("Arrivederci\n");
                break;
            default:
                printf("Opzione non disponibile\n");
        }
    }while(*scelta != 0);
    free(scelta);

    return 0;
}

void VisualizzaMenu(){

    printf("---- ESERCITAZIONE PUNTAORI ----\n\n");
    printf("1. Verifica se la stringa e' Palindorma\n");
    printf("2. Inverti stringa\n");
    printf("3. Conta vocali e consonanti di una stringa\n");
    printf("4. Cerca un valore in un vettore\n");
    printf("5. Calcolo min max e media di un vettore\n");
    printf("6. Concatena due stringhe\n");
    printf("0. Esci\n\n");
    printf("Scelta: ");
}

void isPalindroma(){
    char* str = (char*)malloc(sizeof(char)*MAX);
    gets(str);
    fflush(stdin);
    str = (char*)realloc(str, sizeof(char)*(strlen(str)+1));
    int palindromo = 1;
    int* n = (int*)malloc(sizeof(int));
    *n = strlen(str);
    int* i = (int*)calloc(1, sizeof(int));
    while(*i < *n / 2 && palindromo == 1){
        if(*(str + *i) != *(str + *n - *i - 1))
            palindromo = 0;
        i++;
    }
    if(palindromo == 1)
        printf("\nLa stringa e' palindroma\n\n");
    else
        printf("\nLa stringa non e' palindroma\n\n");
}

void Concatena(){
    
}