#include <stdio.h>


int main(){
    char A[7] = "ABCDEF";
    int i;
    for(i=5;i;i--)
    if(i%2)
    printf("%c",A[i]);
}
