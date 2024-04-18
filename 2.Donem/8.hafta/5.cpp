#include <iostream>

using namespace std;

class DateClass{
    public:
    int ay {};
    int gun {};
    int yil {};

};

int main(){
    DateClass date;
    date.ay = 1;
    date.gun = 1;
    date.yil = 2021;
    cout << date.gun << "/" << date.ay << "/" << date.yil << endl;
 
    return 0;
}