#include <iostream>
using namespace std;



enum FilmTuru{
    drama,
    komedi,
    aksiyon,
    gerilim
};

struct Film{
    string ad;
    string yonetmen;
    int  tarih;
    enum FilmTuru tur;
};
void filmEkle(struct Film **filmler, int *filmSayisi);
void filmSil();
void filmListele(struct Film **filmler, int filmSayisi);

