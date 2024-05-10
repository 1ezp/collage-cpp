#include <iostream>

using namespace std;


class Depolama{
    private:
        int m_nDeger {};
        double m_dDeger {};

    public:

        Depolama(int nDeger, double dDeger): m_nDeger(nDeger), m_dDeger(dDeger){}
        // Goruntu class is a friend of Depolama class
        friend class Goruntu;
};

class Goruntu{
    private:
        bool m_IlkGoruntu;

    public:
        Goruntu(bool ikinciGoruntu): m_IlkGoruntu(ikinciGoruntu){}
        void NesneGoster(const Depolama depolama){
            if(m_IlkGoruntu){
                cout << depolama.m_nDeger << " " << depolama.m_dDeger << endl;
            }
            else{
                cout << depolama.m_dDeger << " " << depolama.m_nDeger << endl;
            }
        }
};

int main(){

    Depolama depolama1(5, 6.7);
    Goruntu goruntu1=true;

    goruntu1.NesneGoster(depolama1);

    return 0;
}

