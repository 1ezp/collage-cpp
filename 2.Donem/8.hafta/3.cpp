#include <iostream>
using namespace std;

class Calisan{
    public:
    string ad;
    int yas;
    double maas;

    void yazdir(){
        cout << "Ad: " << ad << endl;
        cout << "Yas: " << yas << endl;
        cout << "Maas: " << maas << endl;
    }

    void yasYazdir(){
        cout << "Yas: " << yas << endl;
    }
    
};

int main(){
    
    Calisan Insan = {"Ali", 25, 5000};
    Calisan Banuz = {"Ali", 25, 5000};

    Banuz.yazdir();
    Insan.yazdir();


    return 0;
}
