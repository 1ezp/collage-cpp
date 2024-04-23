#include <iostream>
#include <cstdlib>
#include "filmislemleri.h"

using namespace std;


void filmEkle(struct Film **filmler, int *filmSayisi){
    system("cls");
    cout << "Film adi: ";
    cin >> (*filmler)[*filmSayisi].ad;
    cout << "Yonetmen: ";
    cin >> (*filmler)[*filmSayisi].yonetmen;
    cout << "Yapim yili: ";
    cin >> (*filmler)[*filmSayisi].tarih;
    cout << "Tur (0:Dram, 1:Komedi, 2:Aksiyon, 3:Gerilim): ";
    int tur;
    cin >> tur;
    (*filmler)[*filmSayisi].tur = (enum FilmTuru)tur;
    (*filmSayisi)++;
    cout << "Film eklendi." << endl;
    cout << "\n\n";
}

void filmSil(){
    system("cls");
    cout << "Film silme." << endl;
    cout << "\n\n";
};

void filmListele(struct Film **filmler, int filmSayisi){
    system("cls");
    cout << "Film listeleme." << endl;
    cout << "Toplam film sayisi: " << filmSayisi << endl;
    for(int i = 0; i < filmSayisi; i++){
        cout << "Film " << i+1 << ":" << endl;
        cout << "Film adi: " << (*filmler)[i].ad << endl;
        cout << "Yonetmen: " << (*filmler)[i].yonetmen << endl;
        cout << "Yapim yili: " << (*filmler)[i].tarih << endl;
        cout << "Tur: " << (*filmler)[i].tur << endl;
    }
    cout << "\n\n";
};


