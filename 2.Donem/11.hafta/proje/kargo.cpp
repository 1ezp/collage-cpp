#include <iostream>

using namespace std;

class Person{
protected:
    string name;
    string address;
    string city;
    string zipCode;
    string country;

public:
    Person(string name, string address, string city, string zipCode, string country)
    :name(name), address(address), city(city),zipCode(zipCode),country(country){}

};

class Package{

private:
    Person Sender;
    Person Reciver;
    
    double agirligi;
    double ucret;

public:
    Package(Person sender, Person reciver,double agirligi, double ucret)
    :Sender(sender),Reciver(reciver),agirligi(agirligi),ucret(ucret) {}
    
    virtual double calculateCost()const{
        return agirligi * ucret;
    }
};


class TwoDayPackage: public Package{
private:
    double sabitUcret;

public:
    TwoDayPackage(Person sernder, Person reciver,double agirligi, double ucret,double sabitUcret):
    Package(sernder, reciver,agirligi,ucret), sabitUcret(sabitUcret){}

    double calculateCost() const override {
        return Package::calculateCost() + sabitUcret;
    }
};

class OvernightPackage: public Package{
private:
    double sabitUcret;

public:
    OvernightPackage(Person sernder, Person reciver,double agirligi, double ucret,double sabitUcret):
    Package(sernder, reciver,agirligi,ucret), sabitUcret(sabitUcret){}
    
    double calculateCost() const override {
        return Package::calculateCost() + sabitUcret;
    }
};

int main(){

    Person ahmet {"ahmet a","kosk mah. 2344","Kayseri","38000","TR"};
    Person hikmet {"hikmet b","kosk mah. 55","Istanbul","38000","TR"};

    TwoDayPackage pkg1 = {ahmet, hikmet, 2.5,40.0,10};
    OvernightPackage pkg2 = {ahmet, hikmet, 3.0,40.0,15};
    cout << "TwoDayPackage ucreti: " << pkg1.calculateCost() << endl;
    cout << "OvernightPackage ucreti: " << pkg2.calculateCost() << endl;
    return 0;
}

