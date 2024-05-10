#include <iostream>

using namespace std;

class Meyve{
    public:
        enum MeyveTipi{
            elma,
            muz,
            cilek
        };

    private:
        MeyveTipi m_tip {};
        int m_yeme {0};
    
    public:
        Meyve(MeyveTipi tipi): m_tip(tipi) {}
        MeyveTipi getTipi() const {return m_tip;}
        int getyeme() const {return m_yeme;}

};

int main(){
    Meyve Elma (Meyve::elma);
    if(Elma.getTipi() == Meyve::elma){
        cout << "Elma" << endl;
    }
    else
        cout << "Elma degil" << endl;

    return 0;
}
