#include <stdio.h>

int topla(int n1, int n2)
{
    return n1 + n2;
}

int main()
{
    int toplam = topla(5, 5);
    printf("%d", toplam);
    return 0;
}