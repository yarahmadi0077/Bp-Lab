#include <stdio.h>
//soal1
/*
int main() {
    int a[5] = {1 , 2 , 3 , 4 , 5} ;
    printf("%lu\n" , sizeof(a)) ;
    int *ptr = (int *)(&a + 1) ;
    printf("%d %d\n" , *(a + 1) ,*(ptr - 1));
    return 0 ;
}
*/
//soal 2
/*
void f(char **);

int main() {
    char *argv[] = {"ab", "cd", "ef", "gh", "ij", "kl"};
    f(argv) ;
    return 0;
}

void f(char **p){
char *t;
t = (p += sizeof(int))[-1];
printf("%s" , t );
}
*/


//soal 3

/*
int f(int* p){
    printf("a = %d\n" , *p) ;
}
    int main(){
    int a = 10 ;
    f(&a);
}
*/

//soal4

/*
int main(){
    int a[][3] = {1 , 2 , 3 , 4 , 5 , 6 } ;
    int (*ptr)[3] = a ;
    printf("%d " , sizeof(a)) ;
    printf("%d %d", (*ptr)[1] , (*ptr)[2]) ;
    ++ptr ;
    printf("%d %d\n" , (*ptr)[1] , (*ptr)[2]);
    return 0 ;
	6 5 5 4
}
*/

//soal 5
/*
void factorial (int *res , int num ) {
	*res =1 ;
	for (int i = 1 ; i <= num ; i++){
		*res *= i ;
	}
}

int main(){
	int res;
	int num = 5 ; 
	factorial(&res , num ) ;
	printf("%d! = %d" , num , res) ;
	return 0 ;
}
*/
