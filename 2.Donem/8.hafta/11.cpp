// yakici
#include <iostream>
#include <cassert>


using namespace std;

class Employee{

    public:
    Employee(){
        cout << "Employee constructor" << endl;
    }
    ~Employee(){
        cout << "Employee destructor" << endl;
    }

};


int main(){

    Employee* emp = new Employee();

    delete emp;
    return 0;
}
