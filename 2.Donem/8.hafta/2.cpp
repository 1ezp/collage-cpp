#include <iostream>

using namespace std;

// Define a class named TarihYapisi with 3 integer members: gun, ay, yil
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
