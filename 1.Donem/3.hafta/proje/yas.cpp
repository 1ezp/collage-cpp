#include <iostream>

using namespace std;

int main()
{
    int yas;

    cout << "Enter Your Age: ";
    cin >> yas;

    if ((yas >= 0) && yas <= 2)
    {
        cout << "Bebeklik\n";
    }
    else if (yas >= 3 && yas <= 13)
    {
        cout << "Cocukluk\n";
    }
    else if (yas >= 14 && yas <= 21)
    {
        cout << "Ergenlik\n";
    }
    else if (yas >= 22 && yas <= 33)
    {
        cout << "Genclik\n";
    }
    else if (yas >= 34 && yas <= 57)
    {
        cout << "Yetiskinlik\n";
    }
    else if (yas >= 58)
    {
        cout << "Yaslilik\n";
    }
    else
    {
        cout << "Please Enter Vaild Number";
    }

    return 0;
}