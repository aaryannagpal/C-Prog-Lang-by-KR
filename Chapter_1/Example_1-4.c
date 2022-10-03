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
/*NOTE BY ANOTHER C DEVELOPER: They don't have to be in caps.
Some things you can do with macros:-
1. #ifndef "if not defined, do this"
2. #ifdef "if defined, do this"
3. #else "otherwise, do this"
4. #undef "I don't want this macro anymore. Remove it."
4. Create inline functions, for example:-
#define __ALLOC_N(_P) _P=(struct node*)malloc(sizeof(struct node)); \
                                       _P==NULL?perror("[malloc]"):puts("Allocation successful.")
\ was used to tell the compiler that the line below it is also a part of the inline function.
