#include <iostream>

using namespace std;

int main(){
    int *ptr;

    // create memory allocation with size of int = 4 bytes
    ptr = (int*)malloc(sizeof(int));
    // check if memory allocation is successful
    if (ptr == NULL){
        cout << "Memory allocation failed" << std::endl;
        return 1;
    }

    // assign value to the memory location
    *ptr = 225;
    cout << *ptr << endl;

    free(ptr); // free the memory location
    ptr = NULL; // set the pointer to NULL
    return 0;
    return 0;
}