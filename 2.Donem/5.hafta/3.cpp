#include <iostream>
#include <cstdarg>
#include <cstdio>

using namespace std;


int topla(int parametreSayi,...);

int main(){

    int sayi1 = 5, sayi2=10,sayi3=15;
    //cout << sayi1 << sayi2 << sayi3 << endl;
    cout << topla(2,sayi1,sayi2)<<endl; 
    cout << topla(3,sayi1,sayi2,sayi3); 
    return 0;
}

int topla(int parametreSayi,...){
    va_list parametrePtr;
    va_start(parametrePtr , parametreSayi);
    int toplam=0;
    for(int i = 0;i<parametreSayi;i++){
        toplam += va_arg(parametrePtr,int); 
        va_end(parametrePtr);
    }
    return toplam;
}
