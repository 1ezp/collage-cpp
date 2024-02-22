#include <iostream>

using namespace std;
int main()
{
    int N = 5;

    for (int i = 0; i < N; i++)
    {
        int coefficient = 1;

        for (int space = 0; space < N - i - 1; space++)
        {
            cout << " ";
        }

        for (int j = 0; j <= i; ++j)
        {
            cout << coefficient << " ";
            coefficient = coefficient * (i - j) / (j + 1);
        }

        cout << endl;
    }

    return 0;
}
