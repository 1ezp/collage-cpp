#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;


struct nokta{
    int x;
    int y;
};

struct daire{
    nokta merkez;
    int yaricap;
};
void daireBilgileriYazdir(daire d);

int main(){
    daire d1;
    d1.merkez.x = 5;
    d1.merkez.y = 5;    
    d1.yaricap = 10;

    daireBilgileriYazdir(d1);

    return 0;
}

void daireBilgileriYazdir(daire d){
    cout << "Dairenin merkezi: (" << d.merkez.x << "," << d.merkez.y << ")" << endl;
    cout << "Dairenin yaricapi: " << d.yaricap << endl;
    cout << "Darienin cevresi: " << 2*3.14*d.yaricap << endl;
}