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



int main() {
    BasketbolOyuncusu burak;
    burak.isim = "Burak";
    cout << burak.getIsim() << endl;
    return 0;
}
