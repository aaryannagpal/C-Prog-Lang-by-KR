#include <stdio.h>

int power(int m, int n); //m^n
//this is a function prototype which must agree with the defination and uses of power function we will define, else error arises

int main(){
    int i;
    for (i = 0; i <10 ; ++i){
        printf("%d %d %d\n", i, power(2,i), power(-3,i));
    }
    return 0;
}

/*Power : Raise m to the power of n*/

int power(int base, int n){ //arguments
    int i, p; //initialized local variables
    p = 1;
    for (i = 1; i <= n; ++i){

        p = p * base;
    }
    return p; //value is returned
}