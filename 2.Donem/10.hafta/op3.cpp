#include <iostream>
using namespace std;

class Nokta{

    private:
        double x;
        double y;
        double z;

    public:
    Nokta(double x = 0.0,double y = 0.0,double z = 0.0):x(x),y(y),z(z){}

    Nokta operator-() const {
        return Nokta(-x, -y, -z);
    }

    double getX() const {return x;}
    double getY() const {return y;}
    double getZ() const {return z;}

};

Nokta Nokta::operator-() const
{
    return (-x,-y,-z);
}

int main(){

    Nokta n1(1.0,2.0,3.0);
    cout << n1 << endl;

    return 0;
}

