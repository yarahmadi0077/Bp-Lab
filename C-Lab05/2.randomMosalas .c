#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main ()
{   
    double a , b , o3 ;
    double pi = acos(-1) ;
    srand(time(0)) ;

    // 2 random wings in range [5 , 25]
    a = rand() % (25 - 5 + 1) + 5 ;
    b = rand() % (25 - 5 + 1) + 5 ;
    printf("a = %lf\n" , a ) ;
    printf("b = %lf\n" , b ) ;

    // 1 random angle in range [1 , 90]
    o3 = rand() % (90 - 1 + 1) + 1 ;
    printf("o3 = %lf\n" , o3 ) ;

    double rad3 = (o3 * pi) / 180.0 ;
    double c = sqrt(a*a + b*b - 2*a*b*cos(rad3)) ; 
    printf("c = %lf\n" , c ) ;


    double rad1 = asin(a * sin(rad3) / c);
    // double rad2 = asin(b * sin(rad3) / c);
    double o1 = (rad1 * 180.0) / pi ;
    double o2 = 180 - o3 - o1 ;

    if((a < b) && (a < c))
    {
        printf("the min angle is o1 = %lf\n" , o1 );
        printf("o2 = %lf\n" , o2) ; 
    }
    else if((b < c) && (b < a))
    {
        printf("the min angle is o2 = %lf\n" , o2 );
        printf("o1 = %lf\n" , o1) ; 
    }
    else if ( (c < a) && (c < b))
    {
        printf("the min angle is o3 = %lf\n" , o3 ) ;
        printf("o1 = %lf\n" , o1) ;
        printf("o2 = %lf\n" , o2) ;
    }
 
    return 0 ;
}