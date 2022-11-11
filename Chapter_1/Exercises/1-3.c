#include <stdio.h>
/*Fahrenheit to Celsius Table from 0 to 300 F*/

//C = (5/9)(F-32)

main(){
    float fahr, celsius;
    float lower, upper, step;

    lower = 0; //lower limit of the scale
    upper = 300; //upper limit of the scale
    step = 20; //step size

    fahr = lower;
    printf("Fahrenheit to Celsius \n");

    while (fahr <= upper){
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%.2f\t%.2f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
