#include <iostream>

void sifirla(int *arg){
    *arg = 0;
}

int main(){
    int sayi = 10;
    sifirla(&sayi);
    std::cout << sayi;
    return 0;

}
