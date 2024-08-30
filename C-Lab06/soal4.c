#include <stdio.h>
#include <math.h>
int main ()
{
    int a1 , a2 , b1 , b2 , c1 , c2 ;
    scanf("%d %d" , &a1 , &a2);
    scanf("%d %d" , &b1 , &b2);
    scanf("%d %d" , &c1 , &c2);
    if(maximum(a1 ,b1,c1) > minimum(a2 ,b2,c2))
        printf("No Share.");
    else {
    printf("%d\t" , maximum(a1 ,b1,c1));
    printf("%d" , minimum(a2 ,b2,c2));
    }
    return 0 ;
}

int maximum(int x, int y , int z ) {
    int max = x;
    if (y > max) 
    max = y;
    if (z > max)
    max = z;
    return max;
}
int minimum(int x, int y , int z ) {
    int min = x;
    if (y < min) 
    min = y;
    if (z < min)
    min = z;
    return min;
}
