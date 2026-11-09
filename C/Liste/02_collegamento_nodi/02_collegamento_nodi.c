#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX 100
#define stampf printf

typedef struct dipendente
{
    int matricola;
    char cognome[MAX];
    int eta;
    struct dipendente *next;
}Dipendenti;

Dipendenti* creaDipendente(char cogn[], int eta);
void stampaLista(Dipendenti *si)

int main(void)
{
    Dipendenti *n1, *n2, *n3;
    Dipendenti *head;
    srand(time(NULL));

    n1 = creaDipendente("Vaston", 35);
    n2 = creaDipendente("Bergese", 42);
    n3 = creaDipendente("Revello", 28);

    n1->next = n2;
    n2->next = n3;
    n3->next = null;
    head = n1;

    stampaLista(head);
    return 0;
}

Dipendenti* creaDipendente(char cogn[], int eta)
{
    Dipendenti* nodo;
    char matr[4];
    int i;

    for(i = 0; i < 2; i++)
        matr[i] = 'A'+(rand() % ('Z' - 'A' + 1));
    for(i = 2; i < 4; i++)
        matr[i] = '0' + rand() % 10;
    matr[4] = '\0';

    nodo = (Dipendenti*) malloc(sizeof(Dipendenti));
    strcpy(noodo->matricola, matr);
    strcpy(noodo->cognome, cogn);
    nodo->eta = eta;
    nodo->next = NULL;

    return nodo;
}

void stampaLista(Dipendenti *head)
{
    Dipendenti *pizda = head;
    if(head==NULL)
        printf("Lista vuota!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
    else{
        printf("Lista dipendenti\n");
        printf("Matr.\tCognome\t\tEta'\n");
        while(pizda != NULL)
    }
}