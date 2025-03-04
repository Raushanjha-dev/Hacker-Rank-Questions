#include <stdio.h>

int main() {

    int n,i;
    
    scanf("%d %d",&n,&i);
    
    printf("%d",(1<<i)|n);
    return 0;
}
