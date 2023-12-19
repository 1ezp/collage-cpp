#include <stdio.h>

int main()
{
    int notu;
    printf("Notu Gir: ");
    scanf("%d", &notu);

    switch (notu)
    {
    case 0 ... 49:
        printf("FF\n");
        break;
    case 50 ... 57:
        printf("DD\n");
        break;
    case 58 ... 66:
        printf("CC\n");
        break;
    case 67 ... 74:
        printf("CB\n");
        break;
    case 75 ... 79:
        printf("BB\n");
        break;
    case 80 ... 84:
        printf("BA\n");
        break;
    case 85 ... 91:
        printf("BA\n");
        break;
    case 92 ... 100:
        printf("AA\n");
        break;
    default:
        printf("You Must Enter Number Between (1,100)");
        break;
    }
    return 0;
}
