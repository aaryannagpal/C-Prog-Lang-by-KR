//character counting
#include <stdio.h>

/*Count character in input - Using While Loop*/
/*
main(){
    long nc;

    nc = 0;
    while (getchar()!= EOF)
        ++nc;
    printf("%ld\n",nc);
}
*/


/*Count character in input - Using While Loop*/

main(){
    double nc;

    for (nc = 0; getchar()!=EOF; ++nc)
        ;
    printf("%.0f\n", nc);
}


// gives 0 if no input is given
//program will stop taking inputs only when you give ^Z in the terminal in a new line
//Else it will continue taking, even \n and other characters