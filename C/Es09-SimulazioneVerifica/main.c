#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void VisualizzaMenu(char *sc);
void caricaArrayInt(int *array, int *dim, int min, int max);
void stampaArrayInt(int *array, int *dim);
void caricaMultipli(int *array, int *dim, int *x);
void caricaArrayChar(char *array, int *dim, int min, int max);
void stampaArrayChar(char *array, int *dim);
void gnomeSort(char* v, int* n);
int* contaVocali(char* str);

int main(void)
{
    char *scelta;
    //es1
    int *pV;
    int *dim;
    int *x;
    //es 2
    char* pC;
    //es3
    int* vocali;

    srand(time(NULL));
    scelta = (char *)malloc(sizeof(char));

    do
    {
        VisualizzaMenu(scelta);
        system("@cls||clear");
        fflush(stdin);

        switch (*scelta)
        {
        case 'a':
        case 'A':
            dim = (int*)malloc(sizeof(int));
            do
            {
                printf("dimensione array -> ");
                scanf("%d", dim);
            } while (dim < 1);
            pV = (int*) malloc(sizeof(int) * (*dim));
            x = (int*) malloc(sizeof(int));

            caricaArrayInt(pV, dim, -100, 100);
            stampaArrayInt(pV, dim);
            printf("Inserisci il valore x -> ");
            scanf("%d", x);
            caricaMultipli(pV, dim, x);

            free(pV);
            free(dim);
            free(x);
            break;
        case 'b':
        case 'B':
             dim = (int *)malloc(sizeof(int));
            do
            {
                printf("dimensione array -> ");
                scanf("%d", dim);
            } while (dim < 1);
            pC = (char*) malloc(sizeof(char) * (*dim));
            caricaArrayChar(pC, dim, 'a', 'z');
            stampaArrayChar(pC, dim);
            free(dim);
            free(pC);
            break;
        case 'c':
        case 'C':
            pC = (char*) malloc(sizeof(int) + 1000);
            printf("Stringa -> ");
            gets(pC);
            pC = (char*) realloc(pC, sizeof(char) * (strlen(pC)+1));
            vocali = contaVocali(pC);
            printf("Il totale delle vocali presenti nella sottostringa e' %d", *vocali);
            free(vocali);
            free(pC);
            break;
        }
        getchar();
    } while (*scelta != 'q');
    free(scelta);
    printf("Arrivederci...\n");

    return 0;
}

void VisualizzaMenu(char *sc)
{
    printf("-------SIMULAZIONE VERIFICA-------");
    printf("a. Es 1");
    printf("b. Es 2");
    printf("c. Es 3");
    printf("q. Esci\n");
    printf("scelta -> ");
    scanf("%c", sc);
}

void caricaArrayInt(int *array, int *dim, int min, int max)
{
    int *i = (int *)malloc(sizeof(int));
    *i = 0;

    for (; i < *dim; (*i)++)
        *(array + *i) = min + (rand() % (max - 1));

    free(i);
}
void stampaArrayInt(int *array, int *dim)
{
    int *i = (int *)malloc(sizeof(int));
    *i = 0;

    for (; i < *dim; (*i)++)
        printf("%d", *(array + *i));

    printf("\n");
    free(i);
}
void caricaMultipli(int *array, int *dim, int *x)
{
    int *vMul = (int *)malloc(sizeof(int) * (*dim));
    int *cnt = (int *)malloc(sizeof(int));
    int *i = (int *)malloc(sizeof(int));

    for (; i < *dim; (*i)++)
    {
        if (*(array + *i) % *x == 0)
        {
            *(vMul + *cnt) = *(array + *i);
            *(cnt)++;
        }
    }

    printf("Multipli di %d:\n", *x);
    vMul = (int *)realloc(vMul, (*cnt) * sizeof(int));
    stampaArrayInt(vMul, cnt);

    free(vMul);
    free(cnt);
    free(i);
}

void gnomeSort(char* v, int* n)
{
    int* index = (int*) calloc(1, sizeof(int));
    char* tmp;
    while(*index < *n)
    {
        if(*index == 0)
        {
            (*index)++;
        }
        if(*(v+ *index) >= *(v + *index - 1))
        {
            (*index)++;
        }
        else
        {
            tmp = (char*) malloc(sizeof(char));
            *tmp = *(v+ *index);
            *(v+ *index) = *(v + *index - 1);
            *(v + *index - 1) = *tmp;
            (*index)--;
            free(tmp);
        }
    }
    free(index);
}

void caricaArrayChar(char *array, int *dim, int min, int max)
{
    int *i = (int *)malloc(sizeof(int));
    *i = 0;

    for (; i < *dim; (*i)++)
        *(array + *i) = min + (rand() % (max - 1));

    free(i);
}
void stampaArrayChar(char *array, int *dim)
{
    int *i = (int *)malloc(sizeof(int));
    *i = 0;

    for (; i < *dim; (*i)++)
        printf("%c", *(array + *i));

    printf("\n");
    free(i);
}

int* contaVocali(char* str){
    int* cnt = (int*) calloc(1, sizeof(int));
    int* second = (int*) calloc(1, sizeof(int));

    while(*str != '\0' || second < 2){
        if(*second == 1){
            if(*str == '*')
                (*second)++;
            else{
                if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' || *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U'){
                    (*cnt)++;
                }
                str++;
            }
        }else{
            if(*str == '*')
                (*second)++;
            str++;
        }
    }
    free(second);
    return cnt;
}