#include <iostream>

using namespace std;

int main()
{
    int A[3][3][3] = {{{2, 5, 4}, {8, 5, 4}, {9, 1, 2}},
                      {{7, 2, 3}, {2, 3, 5}, {4, 2, 6}},
                      {{4, 5, 3}, {7, 5, 3}, {4, 2, 5}}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                cout << A[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}