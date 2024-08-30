#include <stdio.h>
#include <math.h>
int main (void){

    int n ;
    scanf("%d" , &n);
    double sum1 = 0 ;
    int g = pow(2 , n);
    for (int i = 1 ; i <= g ; i++){
        sum1 += (1.0/i) ;
    }
    printf("%lf\n",sum1);

    double sum2= 0 ;
    for (int i = g ; i > 0 ; i--){
        sum2 += (1.0/i) ;
    }
    printf("%lf",sum2);
    return 0 ;
}