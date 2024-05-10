#include <iostream>

using namespace std;

class Ogretmen {
private:
	string isim;

public:
	Ogretmen(const string& isim) : isim(isim) {}

	const string& getIsim() const { return isim; }
};


class Bolum {
private:
	const Ogretmen& ogretmen;

public:
	Bolum(const Ogretmen& ogretmen):ogretmen(ogretmen){}

};

int main() {

	Ogretmen Banu("Hikmet");
	{
		Bolum bolum(Banu);
	}

	cout << Banu.getIsim() << " hala var!";
	return 0;
}
