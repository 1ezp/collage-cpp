#include <iostream>
using namespace std;


int genrateID(){
    static int id = 0;
    return ++id;
}

int main(){

    cout << genrateID() << endl;
    cout << genrateID() << endl;
    cout << genrateID() << endl;

    return 0;
}
