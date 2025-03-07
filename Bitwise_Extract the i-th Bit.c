#include <stdio.h>

int main() {
    int n, i;
    scanf("%d %d",&n,&i);
    int c= n&(1<<i);
   
    if(c == 0)
    {
        printf("0");
    }
    else{
        printf("1");
    }
    
    
    return 0;
    
}
