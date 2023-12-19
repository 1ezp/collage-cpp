#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "X: ";
    cin >> a;

    for (int i = 1; i <= a; i += 1)
    {
        cout << pow(i, 2) << endl;
    }


    return 0;
}
