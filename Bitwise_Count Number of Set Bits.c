#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int count = ((n & (1 << 0)) ? 1 : 0) + 
                ((n & (1 << 1)) ? 1 : 0) + 
                ((n & (1 << 2)) ? 1 : 0) + 
                ((n & (1 << 3)) ? 1 : 0);
    printf("%d", count);
    return 0;
}
