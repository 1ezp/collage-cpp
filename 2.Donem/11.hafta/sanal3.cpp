#include <iostream>

// Using's
using namespace std;

class A {
    public:
        virtual char getName() const { return 'A'; } // Added virtual keyword
};

class B : public A {
    public:
        char getName() const override { return 'B'; } // Added override keyword
};

class C : public B {
    public:
        char getName() const override { return 'C'; } // Added override keyword
};

class D : public C {
    public:
        char getName() const override { return 'D'; } // Added override keyword
};

// Main
int main() {
    C someNesne;
    A& rnesne = someNesne;
    cout << "rnesne: " << rnesne.getName() << endl;

    return 0;
}