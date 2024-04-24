#include <iostream>

using namespace std;

int main(){

    char strDizi[] = "Selam";
    char *p1 = strDizi;
    char *p2 = (char *) "hikmet";

    cout << strDizi << endl;
    cout << p1 << endl;
    cout << p2 << endl;
    cout << *p2 << endl;
    cout << &strDizi << endl;

    char c = 'Q'; 
    cout << &c;

    return 0;
}