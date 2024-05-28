#include <iostream>

using namespace std;


class Kesir{
private:
    int pay;
    int payda;

public:
    Kesir(int pay, int payda):pay(pay), payda(payda){}
    void print() const
    {
        cout << pay << "/" << payda << endl;
    }
};

int main(){

    Kesir k {1,2};
    k.print();

    return  0;
}

