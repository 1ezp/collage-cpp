#include <iostream>

using namespace std;


class A{

public:
    virtual string getName1(int x) const { return "A"; }
    virtual string getName2(int x) const { return "A"; }
};

class B: public A{

public:
    virtual string getName1(short int x) { return "B"; }
    virtual string getName2(int x) const { return "B"; }
};




int main(){

    B b;
    A& ref = b;
    cout << ref.getName1(1) << endl;
    cout << ref.getName2(2) << endl;
    return 0;
}
