#include <iostream>

using namespace std;

int main(){

    int dizi [4] = {10,20,30,40};
    int *pr;
    pr = dizi;

    for (int i = 0; i < 4; i++)
    {
        cout << *pr << endl;
        cout << pr << endl;
        pr++;
    }
    

    return 0;
}
