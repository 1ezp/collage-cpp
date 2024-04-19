#include <iostream>
#include <cstring>

using namespace std;


int karakterSayisi(const char *cumle,char k){
    int sayi = -1;
    int len = strlen(cumle);
    for(int i = 0;i < len;i++){
        if(cumle[i] == k){
            return i;
        }
    }
    return sayi;
}

int main(){

    char k;
    const char* cumle = "Hello World!";
    cout << "karaktar: ";
    cin >> k;
    int res =karakterSayisi(cumle,k);
    res == -1 ? cout << "NULL" : cout << res;
    return 0;
}

