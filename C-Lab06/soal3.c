#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main ()
{
    int x1 , x2  , x3 , x4 , y1 , y2 , y3 , y4 ;
    scanf("%d %d" , &x1 , &y1) ;
    scanf("%d %d" , &x2 , &y2) ;
    scanf("%d %d" , &x3 , &y3) ;
    scanf("%d %d" , &x4 , &y4) ;
    // Y - y1 = m (X-x1)
    char s[] = "Three in one line" ; 
    if (x1 == x2 && x1 == x3 && x1 == x4){
        printf("All in one line");
        return 0 ; 
    }
    else if((x1 == x2 && x1 == x3) || (x1 == x2 && x1 == x4) || (x2 == x3 && x2 == x4) || (x1 == x3 && x3 == x4)){
        printf("Three in one line");
        return 0 ; 
    }
    if (x1 == x2){
        double m2 = (y1 - y3)/(x1 - x3) ;
        double m3 = (y1 - y4)/(x1 - x4) ;
        if (m2 == m3){
            printf(s) ; 
            return 0 ; 
        }
    }
    else if (x1 == x3){
        double m1 = (y1 - y2)/(x1 - x2) ;
        double m3 = (y1 - y4)/(x1 - x4) ;
        if (m1 == m3){
            printf(s) ; 
            return 0 ; 
        }
    }
    else if (x1 == x4){
        double m2 = (y1 - y3)/(x1 - x3) ;
        double m1 = (y1 - y2)/(x1 - x2) ;
        if (m2 == m1){
            printf(s) ; 
            return 0 ; 
        }
    }
    double m1 = (y1 - y2)/(x1 - x2);
    double m2 = (y1 - y3)/(x1 - x3) ;
    double m3 = (y1 - y4)/(x1 - x4) ;
    if ( m1 == m2 && m1 == m3 && m1 == m3){
        printf("All in one line");
    }
    else if((m1==m2) ||(m1==m3) || (m2 == m3)){
        printf("Three in one line") ;
    }

    int A1 = pow((x2 - x1) , 2) + pow((y2 - y1) , 2);
    int A2 = pow((x3 - x1) , 2) + pow((y3 - y1) , 2);
    int A3 = pow((x4 - x1) , 2) + pow((y4 - y1) , 2);

    int B1 = pow((x3 - x2) , 2) + pow((y3 - y2) , 2);
    int B2 = pow((x4 - x2) , 2) + pow((y4 - y2) , 2);

    if ( A1 + B1 == 4*A2 || A1 + B2 == 4*A2)
        printf("diamond");
    else if (A2+ B1 == 4*A1 || A2 + B2 == 4*A1)
        printf("diamond");

    else if(A3 + B1 == 4*A1 || A3 + B2 == 4*A1)
        printf("diamond");
    else
        printf("None");

    return 0 ;
}
