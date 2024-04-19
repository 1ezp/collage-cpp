#include <iostream>

using namespace std;


void heasp(int *sonuc,int n1,int n2,char islem){
    switch(islem){
        case '+':
            *sonuc = n1+n2;
            break;
        case '-':
            *sonuc = n1-n2;
            break;
        case '*':
            *sonuc = n1*n2;
            break;
        case '/':
            *sonuc = n1/n2;
            break;
        default:
            cout << "yanlis islem";
    };

}

int main(){

    int say1,say2,sonuc;
    char islem;
    cout << "1. sayiyi giriniz: ";
    cin >> say1;
    cout << "2. sayiyi giriniz: ";
    cin >> say2;
    cout << "Islem secin ( + , - , * , / ): ";
    cin >> islem;
    heasp(&sonuc,say1,say2,islem);
    cout << sonuc << endl;
    return 0;
}

