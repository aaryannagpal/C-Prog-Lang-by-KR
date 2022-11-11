#include <stdio.h>
/*Fahrenheit to Celsius Table from 300 to 0 F*/
/*Using for loop*/
//C = (5/9)(F-32)

main(){
    float fahr;
    printf("Fahrenheit to Celsius \n");

    for (fahr = 300; fahr >= 0; fahr = fahr - 20)
        printf("%.2f\t%.2f\n", fahr, (5.0/9.0) * (fahr-32.0));
}
