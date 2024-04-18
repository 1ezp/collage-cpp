#include <iostream>

using namespace std;

class Yapici{
    int deger1;
    double deger2;
    char deger3;

    public:
    // 2. yol yapıcı fonksiyon tanımlama (constructor definition)
    Yapici(): deger1{0}, deger2{0.0}, deger3{'a'}
    {

    }
    void print(){
        cout << deger1 << " " << deger2 << " " << deger3 << endl;
    }
};

int main(){

    Yapici y;
    y.print();
    return 0;
}
