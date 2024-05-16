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

class Calisan: public Kisi {
    public:
        double saatlikUcreti;
        long calisanID;

        Calisan(double saatlikUcreti = 0.0, long calisanID = 0)
            : Kisi(), saatlikUcreti(saatlikUcreti), calisanID(calisanID) {}
        void print() {
            cout << isim << ": " << saatlikUcreti << endl;
        }
};

class Yonetici: public Calisan {
    public:
        long yoneticiID[5]{};
};

int main() {
    Calisan hikmet(10.0, 123);
    hikmet.isim = "Hikmet";
    hikmet.print();
    return 0;
}
