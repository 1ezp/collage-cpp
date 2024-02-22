#include <iostream>

using namespace std;

int main()
{
    // Hikmet Karkour – 23103091057
    const int Students = 2;
    const int Ders = 3;
    const int Sianv = 4;

    int note[Students][Ders][Sianv];

    for (int d = 0; d < Ders; d++)
    {
        cout << d + 1 << ". Ders Notlarini Girin:" << endl;
        for (int s = 0; s < Students; s++)
        {
            cout << s + 1 << ". Ogrenci notlari (viza, kisa sinav, odev, final) :" << endl;
            for (int i = 0; i < Sianv; i++)
            {
                cin >> note[s][d][i];
            }
        }
    }

    for (int d = 0; d < Ders; d++)
    {
        cout << d + 1 << ". Ders Ortalamasi:" << endl;
        for (int s = 0; s < Students; s++)
        {
            double ortalam = 0.0;
            for (int i = 0; i < Sianv; i++)
            {
                ortalam += note[s][d][i];
            }
            ortalam = ortalam / Sianv;
            cout << s + 1 << ". Ogrenci ortalama: " << ortalam << endl;
        }
        cout << endl;
    }
}
