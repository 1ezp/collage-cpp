#include <iostream>

using namespace std;

int main()
{
    int arr1[2][2] = {{1, 5},
                      {5, 4}};
    int arr2[2][2] = {{1, 5},
                      {5, 4}};
    int arr3[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
           // int o = arr1[i][j] + arr2[i][j];
            arr3[i][j] = arr1[i][j] + arr2[i][j];
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
