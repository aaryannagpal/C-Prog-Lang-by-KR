/*Histogram of the lengths of words in input*/
#include <stdio.h>
#define MAXWORD 11 //max length of a word
#define maxhist 15 //max length of histogram
#define IN 1    //inside a word
#define OUT 0   //outside a word


int main(){
    int word[MAXWORD];
    int c, i, j, nc, state, maxvalue, overflow;

    i = j = c = 0;
    nc = 0; //number of characters in a word
    overflow = 0; //to count overflow words
    state = OUT;


    for (i = 0; i<MAXWORD; ++i){
        word[i] = 0;
    }

    while ((c = getchar())!= EOF){

        if (c == ' ' || c == '\n' || c == '\t'){
            state = OUT;
            
            if (nc > 0 && nc < MAXWORD){
                ++word[nc];
            }
            else
            {
                ++overflow;
            }
        nc = 0;
        }
        else if (state == OUT){
            state = IN;
            nc = 1; //beginning of a word
        }
        else{            
            nc++; //inside a word
        }
    }   

    maxvalue = 0;
    for (i = 1; i < MAXWORD; ++i){
        if (word[i] > maxvalue){
            maxvalue = word[i];
        }

    //printing histogram

    int len; //length of each bar
    
    for (i = 1; i < MAXWORD+1; ++i){
        printf("%5d - %5d : ", i, word[i]);

        if (word[i] > 0){
            if ((len = word[i]*maxhist / maxvalue) <= 0){
                len = 1;
            }
        }
        else {
            len = 0;
        }
        while (len > 0){
            putchar('*');
            --len;
        }
        putchar('\n');
        }

    }
    return 0;
}