#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

void VisualizzaMenu();
void svuotaBuffer();
void isPalindroma();

int main(void){
    int* scelta;
    scelta = (int*)malloc(sizeof(int));
    do{
        VisualizzaMenu();
        if(scanf("%d", scelta) != 1){
            *scelta = -1;   // input non numerico -> opzione non valida
        }
        svuotaBuffer();     // consuma il '\n' rimasto (al posto di fflush(stdin))

        system("@cls||clear");

        switch(*scelta){
            case 1:
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
    printf("---- ESERCITAZIONE PUNTATORI ----\n\n");
    printf("1. Verifica se la stringa e' palindroma\n");
    printf("2. Inverti stringa\n");
    printf("3. Conta vocali e consonanti di una stringa\n");
    printf("4. Cerca un valore in un vettore\n");
    printf("5. Calcolo min max e media di un vettore\n");
    printf("6. Concatena due stringhe\n");
    printf("0. Esci\n\n");
    printf("Scelta: ");
}

void svuotaBuffer(){
    int c;
    while((c = getchar()) != '\n' && c != EOF);
}

void isPalindroma(){
    char* str = (char*)malloc(sizeof(char)*MAX);
    printf("Inserisci una stringa: ");
    fgets(str, MAX, stdin);
    str[strcspn(str, "\n")] = '\0';   // toglie il '\n' finale
    str = realloc(str, sizeof(char)*(strlen(str)+1));

    int palindromo = 1;
    int* n = (int*)malloc(sizeof(int));
    *n = strlen(str);
    int* i = (int*)calloc(1, sizeof(int));

    while(*i < *n / 2 && palindromo == 1){
        if(*(str + *i) != *(str + *n - *i - 1))
            palindromo = 0;
        (*i)++;
    }

    if(palindromo == 1)
        printf("La stringa e' palindroma\n");
    else
        printf("La stringa non e' palindroma\n");

    free(str);
    free(n);
    free(i);

    printf("\nPremi invio per tornare al menu...");
    getchar();
    system("@cls||clear");
}