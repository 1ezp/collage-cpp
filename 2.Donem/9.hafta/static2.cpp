#include <iostream>

using namespace std;

class Nesne{
    public:
        static int m_deger;
};  

int Nesne::m_deger{1};

int main(){

    Nesne ilk;
    Nesne iki;

    ilk.m_deger = 5;

    cout << ilk.m_deger << endl;
    cout << iki.m_deger << endl;


    return 0;
}

