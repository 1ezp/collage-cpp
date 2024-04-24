#include <iostream>
#include <stdlib.h>

using namespace std;
void diziYazdir(int *dizi, int boyut);


int main(){

    int *sayiDizisi1;
    int sayi;
    cout << "Eleman sayisini giriniz: ";
    cin >> sayi;
    // create memory allocation array with calloc 
    // calloc take two arguments, the number of elements and the size of each element
    sayiDizisi1 = (int*)calloc(sayi, sizeof(int));
    
    diziYazdir(sayiDizisi1, sayi);

    // set all elements to 5
    for (int i=0;i<sayi;i++){
        sayiDizisi1[i] = 5;
    }

    diziYazdir(sayiDizisi1, sayi);

    sayi = 10;

    // realloc is a function in the C that is used to change
    // size of a previously allocated block of memory.
    sayiDizisi1 = (int*)realloc(sayiDizisi1,sayi*sizeof(int));

    diziYazdir(sayiDizisi1, sayi);


    return 0;
}

void diziYazdir(int *dizi, int boyut){
    for (int i = 0; i < boyut; i++)
    {
        cout << dizi[i] << " ";
    }
    cout << endl;
}