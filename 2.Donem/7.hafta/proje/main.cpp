#include <iostream>

#include "filmislemleri.h"

using namespace std;


int main(){

    struct Film *filmler = new Film[100];
    
    int filmSayisi = 0;


    int secim;
    
    do {
        
        cout << "----------------------------------------" << endl;
        cout << "Film Veritabani Programina Hosgeldiniz!" << endl;
        cout << "----------------------------------------" << endl;
        cout << "Ana Menu" << endl;
        cout << "1. Film Ekle" << endl;
        cout << "2. Film Sil" << endl;
        cout << "3. Film Listele" << endl;
        cout << "0. Cikis" << endl;
        cout << "Seciminizi yapiniz: ";
        cin >> secim;

        switch(secim){
            case 1:
                filmEkle(&filmler, &filmSayisi);
                break;
            case 2:
                filmSil();
                break;
            case 3:
                filmListele(&filmler, filmSayisi);
                break;
            case 0:
                cout << "Programdan cikiliyor..." << endl;
                break;
            default:
                cout << "Hatali secim yaptiniz. Lutfen tekrar deneyiniz." << endl;
                break;
        }
        
    }while(secim != 0);

    return 0;
}