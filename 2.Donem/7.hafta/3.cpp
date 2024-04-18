#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

struct FILIM{
    char ad[50];
    char yontmen[50];
    int yil;
};


int main(){


    FILIM filim1  = {"LUPIN","IDK",2019};    
    FILIM *filimptr = &filim1;

    cout << (*filimptr).ad << endl;
    cout << filimptr->yontmen << endl;
    cout << filimptr->yil << endl;

    return 0;
}
