// Hikmet Karkour - 23103091057
#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    cout << "Num1:";
    cin >> num1;
    cout << "Num2: ";
    cin >> num2;
    int result = 0;
    for (int i = 0; i < num2; i++)
    {
        result = result + num1;
    }
    cout << "Result: " << result;
    return 0;
}
