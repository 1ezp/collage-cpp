#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    float a;
    cout << "A: ";
    cin >> a;
    float b;
    cout << "B: ";
    cin >> b;
    float c = sqrt(pow(a, 2) + pow(b, 2));
    cout << "C is: " << c;
}