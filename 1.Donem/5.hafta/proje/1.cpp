// Hikmet Karkour – 23103091057
#include <iostream>
using namespace std;
int main()
{
    int counter, N;
    cout << "Enter Number: ";
    cin >> N;

    for (int i = 1; i < N; i++)
    {
        bool isAsal;
        if (i == 2)
        {
            isAsal = true;
        }
        for (int j = 2; j < i - 1; j++)
        {
            if (i % j == 0)
            {
                isAsal = false;
                break;
            }
            isAsal = true;
        }
        if (isAsal)
        {
            cout << i << endl;
            counter++;
        }
    }
    cout << "Total: " << counter;
    return 0;
}