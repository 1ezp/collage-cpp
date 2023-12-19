#include <iostream>

using namespace std;

int main()
{

    int sayi1, sayi2, result;

    cout << "1. Sayi Gir : ";
    cin >> sayi1;
    cout << "2. Sayi Gir : ";
    cin >> sayi2;

    if (sayi1 > sayi2)
    {
        cout << "1. Sayi En Buyuk!";
    }
    else
    {
        cout << "2. Sayi En Buyuk!";
    }

    return 0;
}