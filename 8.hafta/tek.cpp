#include <iostream>

using namespace std;

string check(int n1);

int main()
{
    string s;
    int n;
    cout << "Enter num:";
    cin >> n;
    s = check(n);
    cout << s;
    return 0;
}

string check(int n1)
{

    if (n1 % 2 == 0)
    {
        return "cift";
    }
    else
    {
        return "Tek";
    }
}
