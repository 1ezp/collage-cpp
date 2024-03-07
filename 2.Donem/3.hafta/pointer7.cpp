#include <iostream>

using namespace std;

//  int * const ptr = &var;
// accept only address of var

int main(){

    void *ptr;
    char tipChar = 'c';
    int tipInt = 234;
    float tipFloat = 23.4;

    ptr = &tipChar;
    cout << *( (char *)ptr ) << endl;
    
    ptr = &tipInt;
    cout << *( (int *)ptr ) << endl;
    
    ptr = &tipFloat;
    cout << *( (float *)ptr ) << endl;

    return 0;
}