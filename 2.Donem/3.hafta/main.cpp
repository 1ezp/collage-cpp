#include <iostream>

using namespace std;

int main(){

    int* ptr;
    int a = 5;

    ptr = &a;

    *ptr = 6;
    cout << a << endl;
    cout << ptr << endl;
    cout << *ptr ;


    return 0;
}
