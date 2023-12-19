#include <iostream>

using namespace std;

int main()
{

    char islem;
    int num1, num2;
    cout << "T. Tolama\nM. cikarma\nC. Carpma\nB. Bolme\n: ";
    cin >> islem;
    cout << "Number 1 : ";
    cin >> num1;
    cout << "Number 2 : ";
    cin >> num2;
    switch (islem)
    {
    case 'T':
        cout << "Toplama = " << num1 + num2;
        break;
    case 'M':
        cout << "cıkarma = " << num1 - num2;
        break;
    case 'C':
        cout << "Carpma = " << num1 * num2;
        break;
    case 'B':
        cout << "Bolme = " << num1 / num2;
        break;
    default:
        cout << "Please Enter Valid char. (T , M , C , B)";
    }
    return 0;
}