#include <iostream>
#include <stdio.h>

using namespace std;

enum KullaniciSeviyleri{
    misafit=1,
    orgrenci=2,
    akademisyen=3,
    Admin=4,
};

enum Gunler{
    Pazartesi,
    Sali,
    Carsamba,
    Persembe,
    Cuma,
    Cumartesi,
    Pazar
};

int main(){
    
    KullaniciSeviyleri seviye;
    cout << "Kullanici seviyesini giriniz: ";
    scanf("%d",&seviye);
    switch(seviye){
        case misafit:
            cout << "Misafir girisi yapildi" << endl;
            break;
        case orgrenci:
            cout << "Ogrenci girisi yapildi" << endl;
            break;
        case akademisyen:
            cout << "Akademisyen girisi yapildi" << endl;
            break;
        case Admin:
            cout << "Admin girisi yapildi" << endl;
            break;
        default:
            cout << "Hatali giris yaptiniz" << endl;
            break;
    }
 
    return 0;
}
