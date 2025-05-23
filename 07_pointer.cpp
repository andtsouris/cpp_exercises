#include <stdio.h>
#include <cmath>

void update(int *a,int *b) {
    int temp_a = (*a) + (*b);
    (*b) = abs((*b - *a));
    *a = temp_a;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}