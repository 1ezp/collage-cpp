#include <iostream>

using namespace std;

class TarihYapisi{
    public:
    int gun;
    int ay;
    int yil;

    void print(){
        cout << gun << "/" << ay << "/" << yil << endl;
    }
};

int main(){

    TarihYapisi tarih1 = {1, 1, 2021};
    tarih1.print();

    return 0;
}
