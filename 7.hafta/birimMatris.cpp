#include <iostream>

using namespace std;

int main()
{

    int A[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == j)
                A[i][j] = 1;
            else
                A[i][j] = 0;
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
