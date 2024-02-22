#include <stdio.h>

int main(){

    int a=3,b=4,c=5,d=6;
    c = c-a;
    a = a+c;
    c = a-c;
    printf("%d",a+c*d/b%c);
}