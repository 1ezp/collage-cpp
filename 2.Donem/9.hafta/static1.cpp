#include <iostream>
using namespace std;

// Static variables are initialized only once, and they are not initialized again.
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
