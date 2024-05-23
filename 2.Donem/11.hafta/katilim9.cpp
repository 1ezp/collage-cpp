#include <iostream>
using namespace std;

class Temel{
    public:
    int m_public;
    protected:
    int m_protected;
    private:
    int m_private;
};

class Pri: private Temel{
    public:
    Pri(){
        m_public = 1;
        m_protected = 2;
        m_private = 3;
    }
};



int main(){
    Temel nesne;
    nesne.m_public = 1;
    nesne.m_protected = 2;
    nesne.m_private = 3;
    
    return 0;
}

