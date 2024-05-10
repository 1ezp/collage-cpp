#include <iostream>

using namespace std;

class Nem;

class Sicaklik{
    private:
        int m_hava {};

    public:
        Sicaklik(int hava = 0):m_hava(hava){}

        friend void printHava(const Sicaklik sicaklik,const Nem nem);

};

class Nem{
    private:
        int m_nem {};
    
    public:
        Nem(int nem = 0):m_nem(nem){}
        friend void printHava(const Sicaklik sicaklik,const Nem nem);
};

void printHava(const Sicaklik sicaklik,const Nem nem){
    cout << "Hava sicaklik: " << sicaklik.m_hava << " Nem: " << nem.m_nem << endl;
}

int main(){
    Nem n1 = 5;
    Sicaklik s1 = 12;

    printHava(s1, n1);
 
    return 0;
}
