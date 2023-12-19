#include <iostream>

using namespace std;

int main()
{
    int arr1[3][3] = {{1, 5, 7},
                      {5, 4, 8},
                      {5, 6, 7}}

    ;
    int arr2[3][3] = {{1, 5, 8},
                      {5, 4, 7},
                      {8, 4, 9}};
    int arr3[3][3];
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            arr3[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                arr3[i][j] += arr1[i][k] * arr2[k][j];
                cout << arr3[i][j] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
