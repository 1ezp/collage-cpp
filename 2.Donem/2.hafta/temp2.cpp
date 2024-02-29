#include <iostream>

template<typename T>
T max(T v1, T v2,T v3){
    T maxV{v1};
    
    if (v2>maxV){
        maxV = v2;
    }

    if (v3>maxV){
        maxV = v3;
    }
    return maxV;
}

int main(){

    int v1=5;
    int v2=3;
    int v3=7;

    std::cout << max(v1,v2,v3);
    return 0;

}
