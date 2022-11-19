/*Fold Lines from spacea*/

#include <stdio.h>

#define MAX 100

int checkLine(char line[], int len){
    if (len > 50){
        for (int i = 0; i < len; ++i){
            if (line[i] == ' ' || line[i] == '\t'){
                return 1;
            }
        }
        return 0;
    }
    return 1;
}

void divideLine(char line[], int len){
    int i,j;
    char newLine[MAX];
    for (i = j = 0; i < (len/2); ++i, ++j){
        newLine[j] = line[i];    
    }
    newLine[j] = '\n';
    ++j;
    for (i,j; i < len; ++i, ++j){
        newLine[j] = line[i];
    }
    j++;
    newLine[j] = '\0';
    printf("%s",newLine);
}

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

void fold(char line[], int len){
    int i,j,k;
    i = j = k = 0;
    char newLine[MAX];

    for (i,j; i < len; ++i, ++j){
        if (line[i]==' ' || line[i]=='\t'){
            newLine[j] = '\n';
        }
        else{
            newLine[j] = line[i];
        }
    }
    newLine[j] = '\0';
    printf("%s", newLine);
}

int main(){
    int len;
    char line[MAX];

    while((len = getLine(line)) > 0){
        if (checkLine(line, len) == 0){
            divideLine(line, len);
        }
        else{
            fold(line, len);
        }
    }
    return 0;
}