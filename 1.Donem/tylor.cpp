#include <iostream>
#include <math.h>

int fak(int a){
    int result=1;
    for (int i = a;i>=1;i--){
        result *= i;
    }
    return result;
}


int main(){
    int x,l;
    double re;
    std::cout <<"Enter lenght: ";
    std::cin >> l;
    std::cout<<"Enter x: ";
    std::cin >> x;
    for (int i = 1;i<=l;i++){
        re+= (pow(x,i)/fak(i));
    }
    printf("Toplam: %2.2f",re);    
}
