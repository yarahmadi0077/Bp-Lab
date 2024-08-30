#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


int main ()
{   
    int x , y  ;
    /* baraye joda kardan (jam o zarb) az mosalasati ha  */ 
    int t ;
    // operator = op 
    // mosalasat = trig
    char op ;
    /* zavie bar hasb darage = o */
    double o ;
    printf("if you press num 1 , you have access to (+,-,/,*,mod) \n ") ;
    printf("& \n") ;
    printf("if you press num 2 , you have access to trigs (sin , cos , tan , cot) in degree mode \n ") ;

    scanf("%d" , &t ) ;


    if(t == 1 )
    {   
        printf("please enter information in this shape (num1 op num2)\n") ;
        scanf("%d %c %d" , &x , &op , &y ) ;
            switch (op)
            {
                case '+' :
                    printf("\n%d" , x + y) ;
                    break ;
                case '-' :
                    printf("\n%d" , x - y) ;
                    break ;
                case '*' :
                    printf("\n%d" , x * y) ;
                    break ;
                case '/' :
                    printf("\n%d" , x / y) ;
                    break ;
                case '%' :
                    printf("\n%d" , x % y) ;
                    break ;
            }
    }

    if(t == 2 )
    {
        printf("please enter information in this shape (trig degree)\n") ;
    
        double pi = acos(-1) ;
        char s [5] ;
        scanf("%s" , s ) ;
        scanf("%lf" , &o) ;
        float R = o * pi / 180 ;
        if (s[0] == 's' && s[1] == 'i' && s[2] == 'n')
        {
            printf("%lf" , sin(R)) ;
        }
        
        else if (s[0] == 'c' && s[1] == 'o' && s[2] == 's')
        {
            printf("%lf" , cos(R)) ;
        }
        else if (s[0] == 't' && s[1] == 'a' && s[2] == 'n')
        {
            printf("%lf" , tan(R)) ;
        }
        else if (s[0] == 'c' && s[1] == 'o' && s[2] == 't')
        {
            printf("%lf" , 1/tan(R)) ;
        }

        else ;
    }

    return 0 ;
}
