#include <iostream>

using namespace std;

int main(){

    int dizi [10] = {1,2,3,4,5,6,7,8,9,10};

    int *ptr = &dizi[0];
    int *ptr2 = dizi;
    int i;

    cout << dizi[0] << endl;
    cout << *ptr << endl;
    cout << *ptr2 << endl;
    cout << dizi[3] << endl;
    cout << *(ptr+3) << endl;
    cout << *(ptr2+3) << endl;
    cout << ptr2[3] << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << " dizi ["<< i << "]" << " adresi" << ptr+i << "degeri " << *(ptr+i) << endl;
    }
    

    return 0;
}
