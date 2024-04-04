#include <iostream>

using namespace std;
int main(){
    // create pointer with NULL value
    int *ptr=NULL;
    int n;
    cout << "Dizi boyutunu giriniz: ";
    cin >> n;
    // set the pointer to the memory location
    ptr = new int[n];

    for(int i = 0;i<n;i++){
        ptr[i] = i*2;
        cout << "ptr[" << i << "] = " << ptr[i] << endl;
    }

    // free the memory location
    delete[] ptr;


}
