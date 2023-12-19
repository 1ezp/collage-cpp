#include <iostream>

using namespace std;

int main()
{
    int arr[3][5] = {{1, 2, 5, 5, 7}, {2, 8, 7, 4, 3}, {9, 6, 4, 2, 1}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
