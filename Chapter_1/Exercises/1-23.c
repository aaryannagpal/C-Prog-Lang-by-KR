#include <stdio.h>

void remove_comments(void){
    int c, d;
    while((c = getchar()) != EOF){
        if(c == '/'){
            if((d = getchar()) == '*'){
                while((c = getchar()) != EOF){
                    if(c == '*'){
                        if((d = getchar()) == '/'){
                            break;
                        }
                    }
                }
            }
            else{
                putchar(c);
                putchar(d);
            }
        }
        else{
            putchar(c);
        }
    }
}

int main(){
    remove_comments();
    return 0;
}