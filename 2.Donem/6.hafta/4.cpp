#include <iostream>

using namespace std;   

void matrisYazdir(int **matris, int satir, int sutun);

int main(){
    int **matris; // iki boyutlu matris icin pointer tanimlama
    int satir, sutun;
    cout << "Satir sayisini giriniz: ";
    cin >> satir;
    cout << "Sutun sayisini giriniz: ";
    cin >> sutun;

    matris = (int**)malloc(sizeof(int)*satir); // satir sayisi kadar pointer icin yer ayirma

    for(int i = 0; i<satir;i++){
        matris[i] = (int*)malloc(sizeof(int)*sutun);
    }
    cout << "Matrisin elemanlarini giriniz: " << endl;
    
    for(int i = 0; i<satir;i++){
        for(int j = 0; j<sutun;j++){
            cin >> matris[i][j];
        }
    }
    cout << endl;
    matrisYazdir(matris, satir, sutun);

    for (int i = 0; i < satir; i++)
    {
        free(matris[i]);
    }

    return 0;
}

void matrisYazdir(int **matris, int satir, int sutun){
    for(int i =0;i<satir;i++){
        for(int j=0;j<sutun;j++){
            cout << matris[i][j] << " ";
        }
        cout << endl;
    }
}

