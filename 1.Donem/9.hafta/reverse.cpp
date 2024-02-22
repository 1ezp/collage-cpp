#include <iostream>
#include <cstring>

using namespace std;


int main(){
    string st;
    cout << "X: ";
    getline(cin,st);
    for (int i=st.length();i>=0;i--){
        cout << st[i];
    }
    
    return 0;
}
