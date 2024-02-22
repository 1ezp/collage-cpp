#include <iostream>

using namespace std;
int main()
{
    int n;
    cout << "X: ";
    cin >> n;
    int pozitif = 0;
    int negatif = 0;
    int sifir = 0;

    for (int i = 0; i < n; i++)
    {
        int o;
        cin >> o;
        if (o > 0)
        {
            pozitif += 1;
        }
        else if (o < 0)
        {
            negatif += 1;
        }
        else if (o == 0)
        {
            sifir += 1;
        }
    }
    cout << "Pozitif: " << pozitif << endl
         << "Negatif: " << negatif << endl
         << "Sifir: " << sifir;
}