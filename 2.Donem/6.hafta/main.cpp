#include <iostream>

using namespace std;

int main() {

    int *ptr = (int*)malloc(sizeof(int));;
        std::cout << ptr << endl;
    
    if (ptr == NULL) {
        cout << "Memory allocation failed" << std::endl;
        return 1;
    }
    *ptr = 15;
    std::cout << *ptr << endl;
    std::cout << ptr[2] << endl;
    free(ptr);


    return 0;
}