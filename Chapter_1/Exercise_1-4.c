#include <stdio.h>
/*Celsius to Fahrenheit Table from 0 to 100 C*/

//C = (5/9)(F-32)

main(){
    int fahr, celsius;
    int lower, upper, step;

    lower = 0; //lower limit of the scale
    upper = 150; //upper limit of the scale
    step = 10; //step size

    celsius = lower;
    printf("Celsius to Fahrenheit \n");

    while (celsius <= upper){
        fahr = 5 * (celsius-32)/9;
        printf("%d\t%d\n", celsius, fahr);
        celsius = celsius + step;
    }
}