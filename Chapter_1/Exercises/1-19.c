/*Print the reverse the inputs line by line*/

#include <stdio.h>

#define MAX 100

int getLine(char a []){
    int c, i;
    for (i = 0; i < MAX -1 && (c = getchar())!= EOF && c!= '\n'; i++){
        a[i] = c;
    }
    if (c == '\n'){
        a[i] = c;
        i++;
    }
    a[i] = '\0';
    return i;
    //returns length of line as well as copies line in an array
}

void Reverse(char a[], int len){
    char temp[len];
    int i = 0;

    if (a[0] == '\n'){
        return;
    }
    for (i; i < len; i++){
        temp[len - 2 - i] = a[i];
    }

    temp[len-1] = '\0';
    printf("%s", temp);

}
int main(){
    char line[MAX];
    int len;

    while((len = getLine(line)) > 0){
        Reverse(line, len);
    }

    return 0;
}

