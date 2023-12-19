#include <iostream>

using namespace std;

int main()
{

    int matris[3][3] = {{0, 2, 6}, {2, 0, 5}, {6, 5, 0}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matris[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matris[i][j] != matris[j][i])
            {
                cout << "Simetrik Matris Degil";
                return 0;
            }
        }
    }
    cout << "Simetrik Matris";

    return 0;
}
