#include <iostream>

using namespace std;

int main()
{

    int i = 0;
    int j = 0;

    while (i <= 9)
    {
        while (j < i)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
