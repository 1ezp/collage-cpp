#include <iostream>

using namespace std;

void FizzBuzz()
{

    for (int i = 0; i < 100; i++)
    {
        cout << i;
        if (i % 3 == 0 && i % 5 == 0)
        {
            cout << "FizzBuzz";
        }
        else if (i % 3 == 0)
        {
            cout << "Fizz";
        }
        else if (i % 5 == 0)
        {
            cout << "Buzz";
        }
        cout << endl;
    }
}

int main()
{
    FizzBuzz();
    return 0;
}