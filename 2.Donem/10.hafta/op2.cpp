#include <iostream>
using namespace std;

class Nokta{

    private:
        double x;
        double y;
        double z;

    public:
    Nokta(double x = 0.0,double y = 0.0,double z = 0.0):x(x),y(y),z(z){}

    friend ostream& operator<<(ostream& cikis, const Nokta& n);

};

ostream& operator<< (ostream& cikis, const Nokta& n){
    cikis << "Nokta(" << n.x << "," << n.y << "," << n.z << ")";
    return cikis;
}

int main(){

    Nokta n1(1.0,2.0,3.0);
    cout << n1 << endl;

    return 0;
}

