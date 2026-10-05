#include <stdio.h>
#include <stdlib.h>

int main(void){
    int* n1 = (int*) malloc(sizeof(int));
    
    int* n2 = (int*) malloc(sizeof(int));
    
    int* n3 = (int*) malloc(sizeof(int));

    float* m = (float*) malloc(sizeof(float));
    
    printf("Inserisci n1 > ");
    scanf("%d", n1);
    printf("Inserisci n2 > ");
    scanf("%d", n2);
    printf("Inserisci n3 > ");
    scanf("%d", n3);

    printf("n1: %d\nn2: %d\nn3: %d", *n1, *n2, *n3);

    *m = (*n1+*n2+*n3)/3;

    printf("La media e': %d", *m);

    return 0;
}