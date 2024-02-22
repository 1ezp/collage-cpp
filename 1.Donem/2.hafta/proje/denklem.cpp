#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double a, b, c;
    double x1, x2;
    double delta;
    cout << "Enter (a, b, c):\n";
    cin >> a >> b >> c;
    delta = pow(b, 2) - 4 * a * c;
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);
    cout << "Delta = " << delta << endl;
    cout << "X1 =" << x1 << " ,"
         << "X2 = " << x2;

    return 0;
}
