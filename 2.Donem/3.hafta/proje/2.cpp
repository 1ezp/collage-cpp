#include <iostream>
#include <stdarg.h>

using namespace std;

void myPrintf(int num_arg, ...){
    va_list args;
    va_start(args,num_arg);

    for (int i = 0; i < num_arg; i++){
        cout << va_arg(args,int) << endl;

    }
    va_end(args);
};

int main(){

    myPrintf(3, 125,526,14);


    return 0;
}
