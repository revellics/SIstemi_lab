#include<stdio.h>

int main(void)
{
    int v[] = { 33, 44, 55 };
    int i;
    int *pV = v; // Copia

    printf("Normale--------------------------------------------\n");
    for (i = 0; i < 3; i++)
        printf("v[%d]: %d, indirizzo: %p\n", i, v[i], &v[i]);

    printf("\nNo quadre--------------------------------------------\n");
    printf("Prima cella: %d, indirizzo: %p\n", *pV, pV);
    pV++;
    printf("Seconda cella: %d, indirizzo: %p\n", *pV, pV);
    pV++;
    printf("Terza cella: %d, indirizzo: %p\n", *pV, pV);
    pV++;

    printf("\nNo quadre o variabili aggiuntive---------------------\n");
    for (i = 0; i < 3; i++)
        printf("v[%d]: %d, indirizzo: %p\n", i, *(v + i), v + i);

    return 0;
}
