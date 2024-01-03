#include <iostream>

using namespace std;


int fak(int n){

    if(n<=1) return n;
    return (n*fak(n-1));

}

int main(){

    cout << fak(5);

    return 0;
}

