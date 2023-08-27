#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d){
    int z=0;
    if (a>b && a>c && a>d) {
        z=a;
    }
    if (b>a && b>c && b>d) {
        z=b;
    }
    if (c>a && c>b && c>d) {
        z=c;
    }
    if (d>a && d>b && d>c) {
        z=d;
    }
    return z;
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}