/*Histogram for frequency of characters in an input*/

#include <stdio.h>

#define MAX 128

int main(){
    int characters[MAX];
    int c, nc, i;

    nc = 0;

    for (i = 0; i< MAX; ++i){
        characters[i] = 0;
    }

    while(1){
        c = getchar();
        if (c == EOF){
            break;
        }
        if (c > 0 && c < 128){
            ++characters[c];
            continue;
        }
        
    }
    
    //creating the histogram

    int t;
    for (i = 1; i< MAX; ++i){
        if (characters[i] !=0){
            if (i == 10)
            {
                printf("\\n    |");
            }
            else if (i == 32)
            {
                printf("Space |");
            }
            
            else
            {
                printf(" %c    |", i); // %c is used to represent ASCII characters
            }
            
            for (t = 0; t != characters[i]; ++t){
                printf("*");
                printf("*");
            }
            printf("\n");
        }
    }

}