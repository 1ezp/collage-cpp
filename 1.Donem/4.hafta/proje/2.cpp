// Hikmet Karkour - 23103091057

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Number: ";
    cin >> n;

    int total = 0;
    int j = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            total += i;
            j++;
        }
    }

    cout << "Ortalam: " << total / count;
    return 0;
}
