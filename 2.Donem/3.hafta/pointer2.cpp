#include <iostream>

using namespace std;

int main(){

    int a = 2;
    int *pa;

    cout << a <<endl;
    cout << &a <<endl;
    
    pa = &a;

    cout << pa <<endl;
    cout << *pa <<endl;
    cout << &pa <<endl;

    &pa = 15;
    
    cout << *pa <<endl;
    cout << a <<endl;
    cout << &pa <<endl;

    pa = NULL;
    cout << pa <<endl;
    cout << &pa <<endl;

    return 0;
}
