#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main ()
{ 
    int n  ; 
    char c ;
    scanf("%d %c" , &n , &c);
    if (c < 91 && c>64)
        printf("%c%c" , c + n , c + n + 32);

    else if (c > 96 && c < 123 )
        printf("%c %c" , c + n - 32 , c + n);

    return 0 ;
}
