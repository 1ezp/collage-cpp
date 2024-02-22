// Hikmet Karkour - 23103091057

#include <iostream>
using namespace std;

int main()
{
    int dersSayisi;
    cout << "Ders Sayisi Gir: ";
    cin >> dersSayisi;

    double toplam;

    for (int i = 1; i <= dersSayisi; i++)
    {
        int notu;
        cout << i << ". Dersi Notu Gir: ";
        cin >> notu;
        toplam += notu;
    }

    double ortalama = toplam / dersSayisi;
    cout << "Ortalama: " << ortalama << endl;
    if (ortalama >= 90)
    {
        cout << 'A';
    }
    else if (ortalama >= 80)
    {
        cout << 'B';
    }
    else if (ortalama >= 70)
    {
        cout << 'C';
    }
    else if (ortalama >= 60)
    {
        cout << 'D';
    }
    else
    {
        cout << 'F';
    }

    return 0;
}
