#include <iostream>
using namespace std;

class Kisi {
    public:
        string isim;
        int yas;

        Kisi(string isim = "", int yas = 0) : isim(isim), yas(yas) {}

        string& getIsim() { return isim; }
        int getYas() const { return yas; }
};

class BasketbolOyuncusu : public Kisi {
    public:
        double oyuncuPerformansi;
        int sayi;
        
        BasketbolOyuncusu(double oyuncuPerformansi = 0.0, int sayi = 0)
            : Kisi(), oyuncuPerformansi(oyuncuPerformansi), sayi(sayi) {}

        int getSayi() const { return sayi; }
};

int main() {
    BasketbolOyuncusu burak;
    burak.isim = "Burak";
    cout << burak.getIsim() << endl;
    return 0;
}
