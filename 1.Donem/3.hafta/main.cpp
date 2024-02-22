#include <iostream>

using namespace std;

int main()
{
    int sayi;
    cout << "Enter Num: ";
    cin >> sayi;

    if (sayi == 0)
    {
        cout << "sifir";
    }
    if (sayi > 0)
    {
        cout << "poz.";
    }
    if (sayi < 0)
    {
        cout << "neg.";
    }

    return 0;
}