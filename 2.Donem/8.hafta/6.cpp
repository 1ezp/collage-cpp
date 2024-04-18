#include <iostream>

using namespace std;

class DateClass{
    int ay {};
    int gun {};
    int yil {};

    public:
    void setDate(int a, int g, int y){
        ay = a;
        gun = g;
        yil = y;
    }
    void print(){
        cout << gun << "/" << ay << "/" << yil << endl;
    }

};

int main(){
    DateClass date;
    date.setDate(1, 1, 2021);
    date.print();
    return 0;
}