#include <stdio.h>
/*Celsius to Fahrenheit Table from 0 to 100 C*/

//C = (5/9)(F-32)

main(){
    float fahr, celsius;
    float lower, upper, step;

    lower = 0; //lower limit of the scale
    upper = 150; //upper limit of the scale
    step = 10; //step size

    celsius = lower;
    printf("Celsius to Fahrenheit \n");

    while (celsius <= upper){
        fahr = 5.0 * (celsius-32.0)/9.0;
        printf("%.2f\t%.2f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
