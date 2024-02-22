#include <iostream>

using namespace std;

int main()
{
    int a = 1, b = 1, c = 1;
    cout << "a: " << a << " b: " << b << " c: " << c << endl;
    a = ++b + ++c;
    cout << "++b:" << b << endl;
    cout << "++c:" << c << endl;
    cout << a << endl;
    a = b++ + c++;
    std::cout << a << endl;
    a = b-- + --c;
    std::cout << a << endl;

    return 0;
}