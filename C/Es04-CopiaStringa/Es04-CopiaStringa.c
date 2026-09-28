#include <stdio.h>

#define LENGTH 5

int main()
{
    char a[LENGTH + 1];
    char b[LENGTH + 1];
    char c;

    for (int i = 0; i < LENGTH; i++)
    {
        printf("Inserisci il %d carattere: ", i);
        scanf(" %c", &c);
        *(a + i) = c;
    }
    *(a + LENGTH) = '\0';

    for (int i = 0; i <= LENGTH; i++)
        *(b + i) = *(a + i);

    printf("\n\na:%s", a);
    printf("\nb:%s", b);

    return 0;
}
