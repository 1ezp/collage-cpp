#include <iostream>

using namespace std;

class DateClass{
    int ay {};
    int gun {};
    int yil {};

    public:
    // Define a function named setDate that takes 3 integers as input and sets the values of ay, gun, yil
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