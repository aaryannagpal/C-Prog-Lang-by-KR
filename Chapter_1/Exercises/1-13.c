/*Frequency of numbers in the input and histogram for the same*/

#include <stdio.h>

#define MAX 15

int main(){
    int letter[MAX];
    int c, nc,i;

    nc = 0;

    for (i = 0; i< MAX; ++i){
        letter[i] = 0;
    }

    while(1){
        c = getchar();
        if (c == EOF){
            break;
        }
        if (c == ' '|| c == '\n' || c == '\t'){
            ++letter[nc];
            nc = 0;
            continue;
        }
        ++nc;
    }
    
    int t;
    for (i = 1; i< MAX; ++i){
        if (i < 10){
            printf(" %d  |", i);
            for (t = 0; t != letter[i]; ++t){
                printf("*");
                printf("*");
            }
            printf("\n");
        }
        else{
            printf(" %d |", i);
            for (t = 0; t != letter[i]; ++t){
                printf("*");
                printf("*");
            }
            printf("\n");
        }
        
        
    }

    printf("Number of characters with no letters: %d\n", letter[0]);
}