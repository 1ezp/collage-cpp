#include <iostream>
using namespace std;

void print(int arr[], int lenght){
    cout << "Tek boyutlu dizi:"<<endl;
    for(int i = 0;i<lenght;i++){
        cout << arr[i]<<" "; 
    }
    cout<<endl;
}

void print(int arr[][3], int r, int w){
    cout << "Cift boyutlu dizi:"<<endl;
    for(int i = 0;i<r;i++){
        for (int j = 0;j<w;j++){
            cout << arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

int main() {
    // Tek boyutlu dizi
    int tek[] = {1, 2, 3, 4, 5};
    int tekLenght = sizeof(tek) / sizeof(tek[0]);
    print(tek,tekLenght);
    
    int cift[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int ciftRow = sizeof(cift) / sizeof(cift[0]);
    int ciftCol = sizeof(cift[0]) / sizeof(cift[0][0]);
    cout << ciftRow<<":"<<ciftCol<<endl;
    print(cift,ciftRow,ciftCol);

    return 0;
}