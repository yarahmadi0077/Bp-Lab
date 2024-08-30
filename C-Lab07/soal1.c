#include <stdio.h>
int main (void){
    int n ;
    scanf("%d" , &n);
    
    for(int i = 2 ; i <= n/2 ; i++){
        if((n % i == 0) && i != 2 && i != 3 && i != 5)
        {
            printf("Adad ziba ast.");
            return 1 ;
        }
        else {
            printf("Adad zesht ast.");
            return 1 ;
        }
    }
    return 0 ;
}