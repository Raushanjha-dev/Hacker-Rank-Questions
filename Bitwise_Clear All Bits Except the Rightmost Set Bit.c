#include <stdio.h>

int main() {
     int n;
    scanf("%d",&n);
    int c = n&(~(n-1));
    printf("%d",c);
    
    return 0;
}
