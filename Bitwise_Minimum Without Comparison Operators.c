#include <stdio.h>

int main() {
 int a,b;
    scanf("%d %d",&a,&b);
    int c = a-b;
     if((c>>31) & 1)
     {
         printf("%d",a);
     }
    else{
        printf("%d",b);
    }
    
    return 0;
}
