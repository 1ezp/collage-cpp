#include <iostream>

using namespace std;
int main()
{
    int sayi;
    cout << "Enter Number: ";
    cin >> sayi;

    if (sayi % 2 == 0)
    {
        cout << "Cift";
    }
    else
    {
        cout << "Tek";
    }

    return 0;
}