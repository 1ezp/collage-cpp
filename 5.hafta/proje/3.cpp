// Hikmet Karkour – 23103091057
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "N: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}