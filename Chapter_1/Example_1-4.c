/*Trying out replace feature*/
#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20

int main(){
    int fahr;
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("%3d %6.1 f\n", fahr, (5.0/9.0)*(fahr - 32));
}
/*They are not declarations. They are written in CAPS*/