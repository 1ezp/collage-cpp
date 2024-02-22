#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int s;
    string cumle;
    cout <<"Enter: ";

    getline(cin, cumle);
    cout << "lenght of char: " << cumle.length()<<endl;
    
    for (int i =0;i<=cumle.length();i++){
        if (cumle[i] == ' ') s++;
    }
    cout << "count of : "<<s+1;
    return 0;
}
