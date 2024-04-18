#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

struct FILIM{
    char ad[50];
    char yontmen[50];
    int yil;
};

struct FILIM1{
    char ad[50];
    char yontmen[50];
    int yil;
}filim2;


int main(){

    //1.yol
    FILIM filim1;
    strcpy(filim1.ad,"LUPIN");
    strcpy(filim1.yontmen,"IDK");
    filim1.yil = 2019;

    cout << filim1.ad << endl;
    cout << filim1.yontmen << endl;
    cout << filim1.yil << endl;

    //2. yol
    strcpy(filim2.ad,"LUPIN");
    strcpy(filim2.yontmen,"IDK");
    filim2.yil = 2019;

    cout << filim2.ad << endl;
    cout << filim2.yontmen << endl;
    cout << filim2.yil << endl;

    // 3. yol
    FILIM filim3 = {"TEST","IDK",2008};
    cout << filim3.ad << endl;
    cout << filim3.yontmen << endl;
    cout << filim3.yil << endl;

    return 0;
}
