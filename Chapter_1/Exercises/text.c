#include <stdio.h>
#define MAX 15
int main(){
    int letter[MAX];
    int nc,i;
	char c;
    nc = 0;
    for (i = 0; i< MAX; ++i){
        letter[i] = 0;
    }
    while(1){
		c=getchar();
		if(c=='\n'){
			break;
		}
        if(c == ' '){
            letter[nc]++;
            nc=0;
			continue;
        }
		nc++;
    }
    for (i = 0; i< MAX; ++i){
        printf("%d ", letter[i]);
    }
}
