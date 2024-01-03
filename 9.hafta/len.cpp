#include <iostream>
#include <cstring>

using namespace std;



int call(char str[]){

    return strlen(str);
}


int main(){
    char s[15];
    cout << "X: ";
    cin >> s;
    cout << call(s);
    return 0;
}
