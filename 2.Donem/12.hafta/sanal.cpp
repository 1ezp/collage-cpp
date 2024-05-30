#include <iostream>

using namespace std;


class A{
    public:
    virtual string getName1() const { return "A"; }
    virtual string getName2() const { return "A"; }
};

class B: public A{
    public:
    virtual string getName1() const { return "B"; }
    virtual string getName2() const { return "B"; }
};




int main(){

    B b;
    A& ref = b;
    cout << ref.getName1() << endl;
    cout << ref.getName2() << endl;
    return 0;
}
