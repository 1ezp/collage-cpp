// Hikmet Karkour – 23103091057
#include <iostream>
using namespace std;


template <typename T>
T toplam(T n1, T n2){
   return n1 + n2;
}

template <typename T>
T carp(T n1, T n2){
    return n1 * n2;
}

template <typename T1,typename T2>
auto farkl(T1 n1, T2 n2){
    return n1*n2;
}

int main(){

    cout << "Hikmet Karkour  23103091057"<<endl;
    cout << "Ayni turden toplam: " << toplam(1,5) << endl;
    cout << "Ayni turden carpim: " << carp(5,6) << endl;
    cout << "Farkli turde carpim: " << farkl(5.6,8);

    return 0;
}

