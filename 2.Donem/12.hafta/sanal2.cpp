#include <iostream>
using namespace std;

class A{
public:
    virtual string getName()  {return "A";}   
};
class B final: public A{
public:
    string getName() override {return "B";}   
};

class C: public A{
public:
    string getName() override {return "C";}   
};


int main(){

    return 0;
}

