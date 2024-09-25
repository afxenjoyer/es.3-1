#include <stdio.h>

int main(void)
{
    int numeroDaVerificare;

    printf("Inserisci il numero da verificare\n");
    scanf("%d", &numeroDaVerificare);

    if(numeroDaVerificare % 2 == 0)
    {
        printf("Il numero %d è pari!\n", numeroDaVerificare);
    }
    else
    {
        printf("Il numero %d è dispari!\n", numeroDaVerificare);
    }
    return 0;
}
