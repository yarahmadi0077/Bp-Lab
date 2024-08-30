#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char s[100];
    fgets(s , 100 , stdin);
    char c1 , c2 ;
    /*old char*/    scanf(" %c" , &c1) ;
    /*new chr*/     scanf(" %c" , &c2) ;
    int n = strlen(s) ;
    for (int i = 0 ; i < n ; i++){
        if (s[i] == c1 ) s[i] = c2 ;
    }

    puts(s);

    return 0 ;
}