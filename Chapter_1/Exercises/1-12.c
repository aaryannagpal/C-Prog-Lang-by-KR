//input one word per line

#include <stdio.h>

int main(){
    int c;
    printf("Input: ");
    while((c = getchar())!=EOF){
        if (c == ' '){
            printf("\n"); 
        }
        else
        {
            putchar(c); //print the word
        }       
    }
    return 0;
}