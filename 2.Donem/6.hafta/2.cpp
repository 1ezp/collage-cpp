#include <iostream>

using namespace std;

int main() {
    int sayi;
    int toplam = 0;
    cout << "kac adet sayi gireceksiniz: ";
    cin >> sayi;
    // create memory allocation array
    int *sayiDizisi = (int*)malloc(sizeof(int)*sayi);
    
    for (int i = 0; i < sayi; i++)
    {
        cout << i+1 << ". sayiyi giriniz: ";
        cin >> sayiDizisi[i];
        toplam += sayiDizisi[i];
    }

    float orta = (float)toplam/(float)sayi;
    cout << "Ortalama: " << orta << endl;
    free(sayiDizisi);
    return 0;
}