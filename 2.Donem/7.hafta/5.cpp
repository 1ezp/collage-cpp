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
    FILIM* filimPtr;

    filimPtr = (FILIM*)malloc(sizeof(filim1));
    

    return 0;
}