#include <iostream>
using namespace std;


class Nesne{
    private:
        int m_deger {0};

    public:
        void ekle(int deger){
            m_deger += deger;
        }
        friend void sil(Nesne nesne);

};


void sil(Nesne nesne){
    // delete the varaible m_deger be set to 0 lol
    nesne.m_deger = 0;
    cout << nesne.m_deger << endl;
}


int main(){
    Nesne nesne1;
    nesne1.ekle(5);
    nesne1.ekle(6);
    sil(nesne1);

    return 0;
}

