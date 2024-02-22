#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <windows.h>

using namespace std;
int main()
{

    int hesap = 1000000;

    int gunLimit = 50000;
    int kalanLimit = 50000;

    int x;

    cout << "x: ";
    cin >> x;
    if (x > gunLimit || x > kalanLimit)
    {
        cout << "cekmek limiti\n";
    }
    else if (x < gunLimit || x < kalanLimit || x <= hesap)
    {
        cout << "Done\n";
        hesap = hesap - x;
        kalanLimit = kalanLimit - x;
    }
    else
    {
        "hesabiniz yeterli miktarda bakiye yok";
    }
    cout << "Kalan Hesap: " << hesap << endl;
    cout << "kalan gun limit: " << kalanLimit;
    return 0;
}