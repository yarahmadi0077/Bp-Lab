#include<stdio.h>
int main(){
    int n;
    scanf("%d" , &n);
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<=i ; j++){
            printf("%c" , 'A' + i);
        }
        printf("\n");
    }
    printf("\n");

    int spaces  ;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        spaces = 2 * (n - i) - 1;
        for (int j = 1; j <= spaces; j++) {
            printf(" ");
        }
        for (int j = i; j >= 1; j--) {
            if (j == n ) continue;
            else    printf("%d", j);
        }
        printf("\n");
    }
    return 0 ;
}