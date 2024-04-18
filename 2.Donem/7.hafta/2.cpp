#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;


struct Calisan
{
    int id{};
    int yas{};
    double ucret{};
};


int main(){
    Calisan joe;
    joe.id = 1;
    joe.yas = 30;
    joe.ucret = 3000.5;

    Calisan frank;
    joe.id = 2;
    joe.yas = 31;
    joe.ucret = 3100.5;

    int totalAge {joe.yas + frank.yas};


    return 0;
}
