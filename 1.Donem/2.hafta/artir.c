#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi1 = 5;
    int sayi2 = 5;
    int onArtir = ++sayi1;
    int sonArtir = sayi2++;
    printf("Sayi1 = %d, Sayi2 = %d\n", onArtir, sonArtir);

    int onEksilt = --sayi1;
    int sonEksilt = sayi2--;
    printf("Sayi1 = %d, Sayi2 = %d", onEksilt, sonEksilt);
    return 0;
}