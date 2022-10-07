/*count lines, words and character in input*/

#include <stdio.h>

#define IN 1 //inside a word
#define OUT 0 //outside a word

int main(){
    int c, nl, nw, nc, state;
    state = OUT;
    nl = nc = nw = 0;
    printf("Input: ");
    while ((c=getchar())!=EOF){
        ++nc;
        if (c == '\n'){
            ++nl;
        }
        if (c == ' ' || c == '\n' || c == '\t'){ //left to right check, if some condition is fulfilled before the whole line is tested, it will stop then and there
        // that is why c == ' ' is written first, because if c is blank, it is sure that it wont be \n or \t, therefore no need to run the whole
        //program through it

            state = OUT;  //not in a word
        }
        else if (state == OUT){
            state = IN;
            ++nw;
        }
    }
    printf("Number of words: %d\nNumber of Lines: %d\nNumber of Characters: %d\n", nw, nl, nc);
}