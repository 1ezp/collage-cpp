#include <iostream>
#include <cstring>
using namespace std;

int hak = 3;
bool sifredogralama(string sifre){
    if (sifre == "hikmet") return true;
    else return false;
}



int main(){
    
    for (int i=0;i<=hak;i++)
    {
        string sifre;
        cout <<hak<<". Enter Pass:";
        cin>>sifre;
        if (sifredogralama(sifre))
        {
             return 0;
        }
        else{ 
            cout << "Sifre yanlis, Hak: "<<hak<<endl;
        }
        hak--;
    }
    cout << "Hak: 0";
    return 0;
}
