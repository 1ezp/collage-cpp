// Hikmet Karkour – 23103091057
#include <iostream>
using namespace std;
int main()
{

    double x;
    cout << "X: ";
    cin >> x;

    int n;
    cout << "N: ";
    cin >> n;

    double result = 1.0;
    double term = 1.0;

    for (int i = 1; i <= n; ++i)
    {
        term *= x / i;
        result += term;
    }
    cout << result;

    return 0;
}