#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100
#define stampf printf

typedef struct studente
{
    int matr;
    char cognome[MAX];
    float info;
    float sistemi;
    float tpsi;
}Studente;

Studente* creaNodo();
void stampaNodo();

int main(void)
{
    Studente* nodo = NULL;
    nodo = creaNodo();
    free(nodo);
    return 0;
}

Studente* creaNodo()
{
    Studente* pStu;
    int matr;
    char cognome[MAX];
    float info;
    float sistemi;
    float tpsi;

    printf("Matricola: ");
    scanf("%d", matr);
    fflush(stdin);
    printf("Cognome: ");
    gets(cognome);
    printf("Media Informatica: ");
    scanf("%f", info);
    printf("Media Sistemi: ");
    scanf("%f", sistemi);
    printf("Media TPSI: ");
    scanf("%f", tpsi);

    pStu = (Studente*) malloc(sizeof(Studente));
    pStu->matr = matr;
    pStu->info = info;
    pStu->tpsi = tpsi;
    pStu->sistemi = sistemi;
    strcpy(pStu->cognome, cognome);
}

void stampaVoto(){
    printf("\nSTAMPA STUDENTE\n");
    printf("%d\t%s\t%.2f\t%.2f\t%.2f\n");
}