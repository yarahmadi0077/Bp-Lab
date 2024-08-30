#include <stdio.h>
int main (){

    char c ;
    int count = 0 ;
    while ( c != '\n')
    {
        scanf("%c", &c);
        if ( c == '4' || c == '7')
            count ++ ;
    }
    if ( count == 4 || count == 7 || count == 47 || count == 77 || count == 44 || count == 74)
    printf("lucky number neighbor");
    else 
    printf("unlucky number neighbor");

    return 0 ;
}

/*for( ;  c != '\n' ; ){

}*/
