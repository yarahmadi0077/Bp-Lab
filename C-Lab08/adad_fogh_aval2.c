#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int size (int n){
    int i = 10, cnt = 1;
    while(n % i != n){
        cnt ++;
        i *= 10;
    }
    return cnt;
}
int size2 (int n) {
    if (n < 10) return 1;
    return 1 + size2(n / 10);
}
bool aval (int n) {
    for (int i = 2; i <= sqrt(n); i++) if (n % i == 0) return false;
    return true;
}
bool superAval(int n) {
    if (n < 10) {
        return aval(n);
    }
    return aval(n) && superAval(n % (int)pow(10, size2(n) - 1));
}
int main () {
    int n;
    scanf("%d", &n);
    printf("%d\n", superAval(n));
    return 0 ;}