#include <stdio.h>

int main()
{
    char v[] = { 'L', 'U', 'C', 'A', '\0' };
    char *pV = v;

    printf("%s\n", v);

    *pV = 'A';
    pV++;
    *pV = 'N';
    pV++;
    *pV = 'N';
    pV++;
    *pV = 'A';
    pV++;
    *pV = '\0';

    printf("%s", v);

    return 0;
}
