#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 6, b = 3, c = 9, d = 4;
    int toplam, fark, carp, bol, mod1, mod2, mod3, mod4;

    toplam = a + b;
    fark = a - b;
    carp = a * b;
    bol = a / b;
    mod1 = a % b;
    printf("toplam = %d\n fark=%d\n carp = %d\n bol = %d\n modu = %d\n", toplam, fark, carp, bol, mod1);

    mod2 = c % -d;
    mod3 = -c % d;
    mod4 = -c % -d;
    printf("mod2 = %d\n mod3 = %d\n mod4 = %d\n", mod2, mod3, mod4);
    return 0;
}