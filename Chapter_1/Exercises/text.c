#include <stdio.h>

#define MAX 15

int main(){
    int letter[MAX];
    int c, nc,i;
    nc = 0;
    for (i = 0; i< MAX; ++i){
        letter[i] = 0;
    }

    while((c = getchar() != EOF)){
        ++nc;
        if(c == ' '){
            ++letter[nc];
            nc = 0;
        }
    }
    for (i = 0; i< MAX; ++i){
        printf("%d ", letter[i]);
    }
}