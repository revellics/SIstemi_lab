#include <stdio.h>
#include <stdlib.h>

void stampaVett(int[]a, int dim);

int Main(void)
{
    int v[] = {1, 2, 3, 4, 5};
    int dimA = 5;

    printf("Array statico di 5 elementi\n", dimA);
    stampaVett(v, dimA);

    //ALLOCAZIONE DINAMINA
    //Malloc
    int numElem = 10;
    int *p;
    p = (int*) malloc(sizeof(int)*numElem)
    stampaVett(p, numElem);

    //Calloc
    p= (int*) calloc(numElem, sizeof(int))
    stampaVett(p, numElem);

    //Realloc
    numElem = 15;
    p = realloc(p, numElem);
    stampaVett(p, numElem);

    //Free
    free(p);

    return 0;
}

void stampaVett(int a[], int dim)
{
    int i;
    for(i=0;i<dim;i++){
        printf("v[%d]: %d - %p\n", i, a[i], &a[i]);
    }
}