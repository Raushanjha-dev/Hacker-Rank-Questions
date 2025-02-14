#include <stdio.h>

int main() {
  int X,Y,Z;
    scanf("%d",&X);
    scanf("%d",&Y);
    scanf("%d",&Z);
    
         if(X%Y == 0 && X%Z == 0 && X>=1 && Y>=1 && Z>=1 )
    {
        printf("X defeats all!");
    }
    
   else if(X%Y == 0 && X>=1 && Y>=1)
    {
        printf("Y triumphs over X!");
    }
    else if(X%Z == 0 && X>=1 && Y>=1 )
    {
        printf("Z outsmarts X!");
    }
    else{
        printf("X remains undefeated!");
    }

    return 0;
}
