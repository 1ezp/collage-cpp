#include <iostream>

using namespace std;


class Deger{
    private:
        int m_deger {};
    
    public:
        Deger(int deger): m_deger(deger){}

        friend bool isEqual(const Deger deger1, const Deger deger2);
};

// check if two Deger objects are equal
bool isEqual(const Deger deger1, const Deger deger2){
    return deger1.m_deger == deger2.m_deger;
}

int main(){

    Deger v1 = 5;
    Deger v2 = 5;
    cout << boolalpha << isEqual(v1, v2) << endl;

    return 0;
}

