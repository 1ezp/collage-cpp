#include <iostream>
using namespace std;

class Temel{
    public:
    virtual string_view getName() const { return "Temel"; }
};
class Turemis: public Temel{
    public:
    string_view getName() const override { return "Turemis"; }
};

int main(){
    Turemis nesne;
    
    Temel& ref = nesne;

    cout << ref.getName() << endl;
    return 0;
}

