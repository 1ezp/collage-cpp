#include <iostream>

using namespace std;


class Animal{
// Soyut sınıflar - Abstract Class
// cuz we did use pure virtual function in this class
protected:
    string name;
public:
    Animal(string name): name(name){}

    const string& getName() const {return name;}
    virtual string speak() const = 0;
    
    virtual ~Animal() = default;
};



string Animal::speak() const{
    return "buzz";
}

class Dragonfly: public Animal{
public:
    Dragonfly(string name): Animal(name){}
    string speak() const override {return "duzz";}
};


int main(){

    Animal* a = new Dragonfly("dragonfly");
    return 0;
}