#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


int main ()
{   
    int t , s , m , h , d ;
    int r1 , r2 ;
    scanf( "%d" , &t ) ;
    d = floor(t / 86400 ) ;
    printf("%d\n" , d ) ; 

    r1 = t - 86400 * d ;
    h = floor(r1 / 3600 ) ;
    printf("%d\n" , h ) ;

    r2 = r1 - 3600 * h ;
    m = floor(r2 / 60 ) ;
    printf("%d\n" , m ) ;

    s = r2 - 60 * m ;
    
    printf("%d" , s ) ;

    return 0 ;
}
