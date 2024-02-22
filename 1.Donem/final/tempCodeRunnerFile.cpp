#include <stdio.h>
#define n 10

int f(int a ){
    if(a==0||a==1){
    printf("Done\n");
    return 1;}
    else
    return f(a-1)+(a-2);
}

int main(){

    printf("%f