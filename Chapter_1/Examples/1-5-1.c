#include <stdio.h>

main(){
    int c;
    /*c = getchar();  //saves only one character
    putchar(c);*/

    //mmaking a bad code
    while ((c = getchar())!=EOF){
        putchar(c);
    }

}
