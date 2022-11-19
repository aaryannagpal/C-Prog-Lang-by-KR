/*Remove white spaces from left and right of each line input*/

#include <stdio.h>

#define MAX 1000 //maximum length of a line

void removeWhite(char a[], int len){
    int i = 0;
    char s[len];
    int j = 0;
    if (a[0] == '\n'){
        return;
    }
    for (i; i<len && a[i] != '\n';){
        if (a[i] == ' ' || a[i] == '\t'){
            i++;
        }
        else{
            s[j] = a[i];
            j++;
            break;
        }
    }
    for (i+=1; i<len-1;i++){
            s[j] = a[i];
            j++;
    }
    
    for (i; i > 0;){
        //printf("%c", a[i]);
        if (s[i] == ' ' || s[i] == '\t'){
            --i;
            if (s[i] != ' ' && s[i] != '\t' && s[i] != '\n'){
                s[i+1] = '\0';
                break;
            }
        }
        else{
            --i;         
        }
    }
    printf("%s", s);
}

int getLine(char a[]){
    int i, c;
    for (i = 0; i < MAX - 1 &&  (c = getchar()) != EOF && c != '\n' && c < 127; i++){
        a[i] = c;    
    }
    if (c == '\n'){
        a[i] = c;
        i++;
    }

    a[i] = '\0';
    return i;
}


int main(){
    char line[MAX];
    int len;
    
    while ((len = getLine(line))>0){
        removeWhite(line, len);
    }
    
    return 0;
}
