#include <iostream>

using namespace std;

class Kseir{
    private:
    int pay;
    int payda;

    public:
    // Default constructor - yapıcı fonksiyon
    Kseir(){
        pay = 0;
        payda = 1;
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



    return 0;
}
