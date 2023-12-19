#include <iostream>

using namespace std;
int main()
{
    int sayi1, sayi2, result;

    cout << "Enter Number 1 : ";
    cin >> sayi1;
    cout << "Enter Number 2 : ";
    cin >> sayi2;

    result = sayi1 % sayi2;
    cout << "Kalan : " << result;

    return 0;
}