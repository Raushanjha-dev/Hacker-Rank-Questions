#include <stdio.h>

int main() {

    int n,i;
     
    
    scanf("%d",&n);
    scanf("%d",&i);
    
    int c = (1<<i)^n;
    printf("%d",c);
    
    
    return 0;
}
