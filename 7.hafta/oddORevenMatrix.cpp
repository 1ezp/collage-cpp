#include <iostream>

using namespace std;

int main()
{
    int A[2][3] = {{2, 5, 4},
                   {5, 8, 1}};

    int B[6], C[6];
    int s1 = 0;
    int s2 = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (A[i][j] % 2 != 0)
            {
                B[s1] = A[i][j];
                s1 = s1 + 1;
            }
            else
            {
                C[s2] = A[i][j];
                s2 = s2 + 1;
            }
        }
    }
    cout << "Matrix B (Odd Numbers): ";
    for (int i = 0; i < s1; i++)
    {
        cout << B[i] << " ";
    }
    cout << endl;

    cout << "Matrix C (Even Numbers): ";
    for (int i = 0; i < s2; i++)
    {
        cout << C[i] << " ";
    }
    cout << endl;

    return 0;
}
