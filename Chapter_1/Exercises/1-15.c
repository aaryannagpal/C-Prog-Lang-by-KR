//F to C function

#include <stdio.h>

float Fahr_to_Cel(float);

int main(){
    int i;
    
    for (i = 0; i < 300; i+=30){
        printf("%d F in Celsius is %.2f C\n",i, Fahr_to_Cel(i));
    }
    return 0;
}

//function being defined

float Fahr_to_Cel(float F){
    float C;
    C = (5.0/9.0)*(F-32.0);
    return C;
}