#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void menu(char *scelta);
// ES 1
void caricaCasualeChar(char *str, int *len, char min, char max);
void stampaArrayChar(char *str, int *len);
int *contaCharAlfabeto(char *str, int *len);
// ES 2
void caricaCasualeInt(int *arr, int *len, int min, int max);
void stampaArrayInt(int *arr, int *len);
void caricaPositiviNegativi(int *arr, int *len);
// ES 3
void cifrarioCesare(char *str, int *shift);

int main(void)
{
    char *scelta = (char *)malloc(sizeof(char));

    srand(time(NULL));

    do
    {
        menu(scelta);
        switch (*scelta)
        {
        case 'a':
        case 'A':
            /*
            Dato un array di char, caricarlo casualmente con valori compresi tra '!' e '}',
            stamparlo e contare quanti caratteri dell'alfabeto contiene
            */
            {
                char *array;
                int *len = (int*) malloc(sizeof(int));
                int *alf = (int*) malloc(sizeof(int));
                printf("Inserire la lunghezza dell'array: ");
                scanf("%d", len);
                printf("\nriga 41");
                array = (char*) calloc(1, sizeof(int) * *len);
                printf("\nriga 42");
                caricaCasualeChar(array, len, 33, 125);
                printf("\nriga 44\n");
                stampaArrayChar(array, len);
                printf("\nriga 46");
                alf = contaCharAlfabeto(array, len);
                printf("\n\nIn questo array ci sono %d lettere dell'alfabeto", *alf);
                free(alf);
                free(array);
                free(len);
            }
            break;
        case 'b':
        case 'B':
            /*
            Date un array di interi, caricarlo casualmente con valori compresi tra -20 e 20 e stamparlo.
            Caricare in un array positivi tutti i valori > 0 presenti nell'array originale.
            Caricare in un array negativi tutti i valori < 0 presenti nell'array originale.
            Stampare entrambi gli array risultanti.
            OTTIMIZZARE L'OCCUPAZIONE DI MEMORIA: i due array devono aumentare di dimensione
            solo quando un valore viene caricato
            */
            {
                int *array;
                int *len = (int*) malloc(sizeof(int));
                printf("Inserire la lunghezza dell'array: ");
                scanf("%d", len);
                array = (int*) calloc(1, sizeof(int) * *len);
                caricaCasualeInt(array, len, -20, 20);
                stampaArrayInt(array, len);
                caricaPositiviNegativi(array, len);
                free(array);
                free(len);
            }
            break;
        case 'c':
        case 'C':
            /*
            Cifrario cesare: data una stringa in input e uno shift,
            cifrarla spostando ogni carattere dell'alfabeto di shift posizioni.
            */
            {
            }
            break;
        }
        getchar();
    } while (*scelta != 'q');
    printf("programma terminato...\n");
    free(scelta);
    return 0;
}

void menu(char *scelta)
{
    printf("=== VERIFICA ===\n");
    printf("a. Esercizio 1\n");
    printf("b. Esercizio 2\n");
    printf("c. Esercizio 3\n");
    printf("q. Termina\n");
    printf("Scelta > ");
    scanf("%c", scelta);
    fflush(stdin);
    system("@cls||clear");
}

void caricaCasualeChar(char *str, int *len, char min, char max)
{
    printf("\nriga 110 ");
    int *i = (int*) calloc(1, sizeof(int));
    for(; *i < *len; *i++){
        *(str + *i) = (char)(min + rand() % (max - min + 1));
    }
    printf("\nriga 114");
    printf("%d", i);
    //free(i);
    // (char)(min + rand() % (max - min + 1));
}
void stampaArrayChar(char *str, int *len)
{
    int *i = (int*) calloc(1, sizeof(int));
    for(; *i<*len; *i++){
        printf("- %c   ", *(str + *i));
        printf("%d\n", i);
    }
    free(i);
}
int *contaCharAlfabeto(char *str, int *len)
{
    int *cont = (int*) malloc(sizeof(int));
    cont = 0;
    int *i = (int*) calloc(1, sizeof(int));
    for(; *i < *len; *i++){
        if(*(str + *i) > 64 && *(str + *i) < 91 || *(str + *i) > 96 && *(str + *i) < 123)
            *cont++;
    }
    return cont;
    free(i);
    free(cont);
}
// ES 2
void caricaCasualeInt(int *arr, int *len, int min, int max)
{
    int *i = (int*) calloc(1, sizeof(int));
    for(; *i < *len; *i++){
        *(arr + *i) = (int)(min + rand() % (max + min + 1));
    }
    free(i);
}
void stampaArrayInt(int *arr, int *len)
{
    printf("\n\n");
    int *i = (int*) calloc(1, sizeof(int));
    for(; *i<*len;*i++){
        printf("- %d\n", *(arr + *i));
    }
    free(i);
}
void caricaPositiviNegativi(int *arr, int *len)
{
    int* arrayPos = (int*) malloc(sizeof(int));
    int* indexPos = (int*) calloc(1, sizeof(int));
    int* arrayNeg = (int*) malloc(sizeof(int));
    int* indexNeg = (int*) calloc(1, sizeof(int));
    int* i = (int*) calloc(1, sizeof(int));
    for(; *i<*len;*i++){
        if(*(arr + *i) < 0){
            *(arrayNeg + *indexNeg++) = *(arr + *i);
        }else if(*(arr + *i) > 0){
            *(arrayPos + *indexPos++) = *(arr + *i);
        }
    }
    stampaArrayInt(arrayPos, (sizeof(int) * (*indexPos-1)));
    stampaArrayInt(arrayNeg, (sizeof(int) * (*indexNeg-1)));
    free(arrayPos);
    free(indexPos);
    free(arrayNeg);
    free(indexNeg);
}
// ESERCIZIO 3
void cifrarioCesare(char *str, int *shift)
{
}
