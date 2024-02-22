// Hikmet Karkour - 23103091057
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "number: ";
    cin >> num;

    int satir = 3;
    int sutun = 10;

    for (int i = 1; i <= satir; i++)
    {
        for (int j = 1; j <= sutun; j++)
        {
            int jj = (i - 1) * sutun + j;
            int result = num * jj;
            cout << result << " ";
        }
        cout << endl;
    }

    return 0;
}
