#include <iostream>
#include <string>
using namespace std;

int main()
{
    int X = 0, Y = 0;

    string saray[5][5] = {
        {"35", "52", "43", "22", "34"},
        {"32", "15", "45", "45", "33"},
        {"31", "45", "41", "42", "12"},
        {"33", "23", "55", "11", "45"},
        {"14", "24", "45", "52", "35"}};

    while (true)
    {
        string A = saray[X][Y];
        int Ax = stoi(string(1, A.at(0)));
        int Ay = stoi(string(1, A.at(1)));
        cout << "Oda: X: " << X << ", Y: " << Y << ", Anahtar: " << A << endl;

        if (Ax == Ay)
        {
            cout << "Hazine bulundu!" << endl;
            break;
        }
        else
        {
            X = Ax - 1;
            Y = Ay - 1;
            cout << X << Y << endl;
        }
    }

    return 0;
}
