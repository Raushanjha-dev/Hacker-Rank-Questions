#include <stdio.h>

int main() {
   int a;
    scanf("%d",&a);
    
    if(a%6 == 0 && a%5 != 0 )
    {
        printf("A");
    }
    else if(a>20 && (a == 21 || a == 22 || a == 33 || a == 35 || a == 55 || a == 77))
    {
        printf("B");
    }
    else if((a>9 && a<100 && a%3 == 0 && a%7 != 0) || (a>9 && a<100 && a%3 != 0 && a%7 == 0) )
    {
        printf("C");
    }
    else if(a==1 || a==4 || a==9 || a==16 || a==25 || a==36 || a==49 || a==64 || a==81 || a==100 || a==121 || a==121 || a==144 || a==169 || a==196)
    {
        printf("D");
    }
    else{
        printf("E");
    }
    
    return 0;
}
