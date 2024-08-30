#include <stdio.h>
#include <math.h>

int fibo(int n){
    if (n == 0 || n == 1) return 1 ;
    return fibo(n - 1) + fibo (n - 2) ;
}
int fibo2(int n){
    return (pow(((1 + sqrt(5))/2) , n ) - pow(((1 - sqrt(5))/2) , n )) / sqrt(5) ;
}
int main (){
    int n ;
    scanf("%d" , &n);
    printf("%d" , fibo2(n));
    return 0 ;
}
