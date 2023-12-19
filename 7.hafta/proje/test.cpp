#include <iostream>
#include <string>
using namespace std;
int main()
{
    int X = 0;
    int Y = 0;
    string saray[5][5] = {
        {"35", "52", "43", "22", "34"},
        {"32", "15", "45", "45", "33"},
        {"31", "45", "41", "42", "12"},
        {"33", "23", "55", "11", "45"},
        {"14", "24", "45", "52", "35"}};
    cout << stoi(string(1, saray[0][0].at(1)));
}