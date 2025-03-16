#include <stdio.h>

int main() {

    int a,b;
    scanf("%d %d",&a,&b);
    int c = (a>>31) ^ (b>>31);
    if(c == 0)
    {
        printf("No");
    }
    else{
        printf("Yes");
    }
    return 0;
}
