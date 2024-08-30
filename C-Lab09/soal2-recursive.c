#include <stdio.h>
int C [100][100];
void zarb(int n, int m, int p , int q , int A[n][m] , int B[p][q], int C[n][q]){
    if (n == 0) return ;

    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < q; j++){
            C[n - 1][j] += A[n-1][i] * B[i][j];
        }
    }

    zarb(n , m , p , q , A , B , C ) ;
}

void namayesh(int n , int q , int C[n][q]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < q; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    printf("%d" , zarb (2 , 2 , 2 , 2 , {{1,3} ,{2 , 4}} , {{1,3} ,{2 , 4}})) ;
    return 0 ;
}