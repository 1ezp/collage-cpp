#include <iostream>

using namespace std;

int main()
{

    int islem;
    int x;

    cout << "1. Fahrenheit'i Celsius'a\n2. Celsius'u Fahrenheit'e\n:> ";
    cin >> islem;

    switch (islem)
    {

    case 1:
        cout << "Fahrenheit Gir: ";
        cin >> x;
        cout << "Celsius = " << 5 * (x - 32) / 9;
        break;
    case 2:
        cout << "Celsius Gir: ";
        cin >> x;
        cout << "Fahrenheit = " << (9.0 / 5.0) * x + 32;
        break;
    }

    return 0;
}