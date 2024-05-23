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

class Turetilmis : public Temel{
    public:
    Turetilmis(){
        m_public = 1;
        //m_protected = 2;
        //m_private = 3;
    }
};

int main(){
    Temel base;
    base.m_public = 1;
    //base.m_protected = 2;
    //base.m_private = 3;
    return 0;
}

