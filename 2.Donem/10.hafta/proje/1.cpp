#include <iostream>

using namespace std;

class Vector3d;

class Point3d{
private:
    double x;
    double y;
    double z;
    
public:
    Point3d(double X = 0.0, double Y = 0.0, double Z = 0.0): x(X),y(Y),z(Z){}
    
    void print() const{
        cout << "Point("<< x << " , " << y << " , " << z << ")\n";
    }

    void moveByVector(Vector3d& V);
};

class Vector3d{

private:
    double x;
    double y;
    double z;

public:
    Vector3d(double X = 0.0, double Y = 0.0, double Z = 0.0): x(X),y(Y),z(Z){}
    void print() const{
        cout << "Vector("<< x << " , " << y << " , " << z << ")\n";
    }
    friend void Point3d::moveByVector(Vector3d& V);
    
};



void Point3d::moveByVector(Vector3d& V){
    x += V.x;
    y += V.y;
    z += V.z;
}

int main(){
    Point3d p = {1.0, 2.0, 3.0};
    Vector3d v = {2.0, 2.0, -3.0};

    p.print();
    //p.moveByVector(v);
    p.moveByVector(v);
    p.print();
    return 0;
}
