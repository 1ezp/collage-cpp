#include <iostream>

using namespace std;

int main(){

    // create memory allocation array with size of 10 int
    int **array = new int*[10];
    for(int i = 0; i < 10; i++){
        array[i] = new int[5];
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            array[i][j] = i*j;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
} 

