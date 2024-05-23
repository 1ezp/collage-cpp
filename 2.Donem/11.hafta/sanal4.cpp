#include <iostream>

using namespace std;

class Hayvan{
protected:
    string isim;
    virtual string_view konus() const {return 0;};
    Hayvan(string_view isim):isim(isim){}

public:
    const string& getIsim() const {return isim;}
    virtual string_view konus() const {return "???";}

};

class Kedi: public Hayvan{
public:
    Kedi(string_view isim):Hayvan(isim){}
    virtual string_view konus() const {return "Miyav";}
};

class Kopek: public Hayvan{

public:
    Kopek(string_view isim):Hayvan(isim){} 
    virtual string_view konus() const {return "Hav Hav";}

};


void report(const Hayvan& h){
    cout << h.getIsim() << " " << h.konus() << endl;
}

int main(){

    Kedi kedi{"memo"};
    Kopek kopek{"karabas"};
    report(kedi);
    report(kopek);
    return 0;
}
