#include <stdio.h>


int f(int a ){
    if(a==0||a==1)
    return 1;
    else
    return f(a-1)+(a-2);
}

int main(){

    int n = 10;
    printf("%d",f(6));
    return 0;
}
