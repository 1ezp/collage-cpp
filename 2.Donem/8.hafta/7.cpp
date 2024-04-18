#include <iostream>

using namespace std;

class IntArry{
    private:
    int arr[10];

    public:
    void set(int index, int value){
        if (index < 0 || index >= 10){
            cout << "Index out of bounds" << endl;
            return;
        }
        arr[index] = value;
        cout << index << ". index set to " << value << endl;
    }
};

int main(){
    
    IntArry arr;
    arr.set(0, 5);

    return 0;
}
