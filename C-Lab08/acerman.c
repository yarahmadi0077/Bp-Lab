#include <stdio.h>

int acerman(int m , int n){
    if (m == 0 ) return n + 1 ;
    else if (m > 0 && n == 0) return acerman( m - 1 , 1 );
    else if (m > 0 && n > 0 ) return acerman ( m - 1 , acerman(m , n - 1));

}

int main (void){
    int m , n ;
    scanf("%d%d" , &m , & n ) ;
    // acerman(m , n);
    printf("%d" , acerman(m,n));
    return 0 ;
}