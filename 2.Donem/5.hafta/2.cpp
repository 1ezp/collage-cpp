#include <iostream>
using namespace std;

int fak(int);

int main(){
    int say=0;
    int(*fonkPtr)(int);
    fonkPtr = fak; 
    cout << "x: "<< endl;
    cin >> say;

    int faktoriyel = (*fonkPtr)(say);
    cout << faktoriyel;
}

int fak(int say){
    int s =1;
    if(say<=0){
        return s;
    }int i;
    for(i=say;i>=1;i--){
        s=s*i;
    }
    return s;
}