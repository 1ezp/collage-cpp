#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

struct orgenci
{
    int id;
    char ad[50];
    char soyad[50];
    int yas;
    char bolum[50];
};

int main(){
    orgenci orenceler[3] = {{1,"Ali","Veli",20,"Bilgisayar"},{2,"Ayse","Fatma",21,"Makine"},{3,"Mehmet","Ahmet",22,"Elektrik"}};
    
    cout << orenceler[0].ad << endl;
    cout << orenceler[0].yas << endl;

    cout << orenceler[1].ad << endl;
    cout << orenceler[1].yas << endl;

    return 0;

}
