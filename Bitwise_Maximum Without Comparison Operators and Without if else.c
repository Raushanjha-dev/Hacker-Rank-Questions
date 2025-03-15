#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

   
    int d = (a-b)>>31 ;

    
    int max = (a & ~d) | (b & d);

    printf("%d", max);
    return 0;
}
