#include <iostream>
#include <vector>

using namespace std;


void ForEach(const vector<int>& values, void(*func)(int)){
    for(int value: values)
        func(value);
}

int main(){

    vector<int> values = {1,2,3,5};

    ForEach(values,[](int value){cout << "Value: " << value << endl;});


    return 0;
}