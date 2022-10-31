/*Power Version 2*/
#include <stdio.h>

int power(int base, int n){
    int p;

    for (p = 1 ; n > 0 ; --n){
        p = p * base;
    }
    return p;
}


int main(){
    int a = power(13,4);
    printf("Value is : %d", a);
    return 0;
}