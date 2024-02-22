// Hikmet Karkour - 23103091057

#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    cout << "Enter Number 1: ";
    cin >> n1;
    cout << "Enter Number 2: ";
    cin >> n2;
    int kalan = n1;
    int result = 0;
    while (kalan >= n2)
    {
        kalan -= n2;
        result++;
    }

    cout << "Result: " << result;
    return 0;
}
