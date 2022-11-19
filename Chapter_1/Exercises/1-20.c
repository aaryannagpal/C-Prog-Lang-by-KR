/*replaces tabs with spaces in the input*/

#include <stdio.h>

#define SPACE 8
#define MAX 1000

int getLine(char line[]){
    int c, i;
    for(i = 0; i < MAX - 1 && (c = getchar()) != EOF && c != '\n'; ++i){
        line[i] = c;
    }
    if(c == '\n'){
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}

void detab(char line[], int len){
    char newLine[MAX];
    int i = 0, j = 0;

    for (i, j; i < len; ++i){
        if (line[i] == '\t'){
            for (int k = 0; k < SPACE; ++k){
                newLine[j] = '-'; //writing this instead of ' ' to notice the change
                ++j;
            }
        }
        else{
            newLine[j] = line[i];
            ++j;
        }
    }
    newLine[j] = '\0';
    printf("%s", newLine);
}

int main(){
    int len;
    char line[MAX];

    while((len = getLine(line)) > 0){
        detab(line, len);
    }
    return 0;
}

//output comes on debugger but not on normal compiler