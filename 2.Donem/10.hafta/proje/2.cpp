#include <iostream>

using namespace std;


class Kesir{
private:
    int pay;
    int payda;

public:
    Kesir(int pay, int payda):pay(pay), payda(payda){}
    friend Kesir operator*(Kesir n1, int n2);
    friend Kesir operator*(Kesir k1, Kesir k2);
    void print() const
    {
        cout << pay << "/" << payda << endl;
    }
};


//Kesir ile tamsayi 
Kesir operator*(Kesir k, int n2){
    return Kesir(k.pay * n2, k.payda);
}

Kesir operator*(Kesir k1, Kesir k2){
    int pay = k1.pay * k2.pay;
    int payda = k1.payda * k2.payda;
    return Kesir(pay,payda);
}

int main(){

    Kesir k1 {1,2};
    Kesir k2 {1,2};
    Kesir sounc = k1 * 4;
    Kesir sounc2 = k1 * k2;
    k1.print();
    sounc.print();
    sounc2.print();
    return  0;
}

