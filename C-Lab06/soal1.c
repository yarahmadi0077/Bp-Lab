#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main ()
{
    double sin ;
    scanf("%lf" , &sin) ;
    double rad = asin(sin);
    char sign ;
    scanf(" %c" , &sign) ;
    if( sin < 1 && sin > 0 && sign == '+' )
    {   
        printf("cos = %lf\n" , cos(rad) ) ; 
        printf("1th quarter\n");
    }
    if(sin < 1 && sin > 0 && sign == '-')
    {
        printf("cos = -%lf\n" , cos(rad) ) ; 
        printf("2th quarter\n");
    }
    if( sin < 0 && sin > -1 && sign == '-' )
    {   
        printf("cos = -%lf\n" , cos(rad) ) ; 
        printf("3h quarter\n");
    }
    if( sin < 0 && sin > -1 && sign == '+')
    {
        printf("cos = %lf\n" , cos(rad) ) ; 
        printf("4th quarter\n");
    }    
    return 0 ;
}