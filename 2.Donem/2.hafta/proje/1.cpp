// Hikmet Karkour – 23103091057

#include <iostream>

using namespace std;

double hesaplama(double l, double w, double h) {
    return l * w * h;
}

double hesaplama(double r, double h) {
    return 3.14 * r * r * h;
}

double hesaplama(double r) {
    return (4.0 / 3.0) * 3.14 * r * r * r;
}

int main() {

    double dikdortgen = hesaplama(3.0, 4.0, 5.0);
    double silindir = hesaplama(2.0, 6.0);
    double kure = hesaplama(4.0);

    cout << "Dikdortgen hacmi: " << dikdortgen << endl;
    cout << "Silindir hacmi: " << silindir << endl;
    cout << "Kuresel hacmi: " << kure << endl;

    return 0;
}