#include <stdio.h>
int main() {
   int x;
    scanf("%d",&x);
    if( x>=0 && x<=360)
    {
        if(x==0 || x<90)
        {
            printf("Acute Angle");
        }
        else if(x == 90)
        {
            printf("Right Angle");
        }
        else if(x>90 && x<180)
        {
            printf("Obtuse Angle");
        }
        else if(x == 180)
        {
            printf("Straight Angle");
        }
        else if(x>180 && x<360)
        {
            printf("Reflex Angle");
        }
        else{
            printf("Full Rotation");
        }
    }
        
        else if(x>360)
        {
            if(x%360<90 && x%360>0)
            {
                printf("Acute Angle");
            } 
            else if(x%360 == 90)
            {
                printf("Right Angle");
            }
            else if(x%360>90 && x%360<180)
            {
                printf("Obtuse Angle");
            }
            else if(x%360 == 180)
            {
                 printf("Straight Angle");
            }
            else if(x%360 >180 && x%360<360)
            {
                printf("Reflex Angle");
            }
            else if(x%360 == 0)
            {
                 printf("Full Rotation");
            }
        }
            
        
    
    return 0;
}

