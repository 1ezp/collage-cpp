#include <iostream>
using namespace std;

class Nesne{
    private:
        int para {};
    
    public:

        Nesne(int para): para(para){}

        //This is automatically called when '+' is used with
        friend Nesne operator+(const Nesne n1, const Nesne n2);
        friend Nesne operator-(const Nesne n1, const Nesne n2);
        int getNesne() const {return para;}


};

Nesne operator+(const Nesne n1, const Nesne n2){
    return n1.para + n2.para;

};

Nesne operator-(const Nesne n1, const Nesne n2){
    return n1.para - n2.para;
};

int main(){

    Nesne n1 = 5;
    Nesne n2 = 10;
    Nesne toplamPara(n1+n2);
    cout << "Bende " << toplamPara.getNesne() << "TL var." << endl;
    toplamPara = n1-n2;
    cout << "Bende " << toplamPara.getNesne() << "TL var." << endl;


    return 0;
}


