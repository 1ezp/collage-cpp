#include <iostream>
#include <cassert>


using namespace std;

class Kseir{
    private:
    int pay;
    int payda;

    public:
    // Default constructor - yapıcı fonksiyon as a default
    Kseir(){
        pay = 0;
        payda = 1;
    }

    // Constructor - yapıcı fonksiyon with parameters
    Kseir(int pay, int payda){
        assert(payda != 0); // payda 0 olamaz (payda can't be 0
        this->pay = pay;
        this->payda = payda;
    }

    int getPay(){
        return pay;
    }
    int getPayda(){
        return payda;
    }
    
    double getDeger(){ return static_cast<double>(pay) / payda;}

};


int main(){

    Kseir k1;
    Kseir k2(1, 2);

    cout << k1.getPay() << "/" << k1.getPayda() << " = " << k1.getDeger() << endl;



    return 0;
}
