#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d){
    int max_n;

    max_n = max(a,b);
    max_n = max(max_n, c);
    max_n = max(max_n, d);
    return max_n;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}