#include <stdio.h>

int main() {

    float n;
    float amount;
    scanf("%f",&n);
    
    
    if( n>=0 && n<=100)
    {
        amount = (n*5)- (n*5)*0.1;
        printf("The electricity bill is: %.2f.",amount);
    }
    
    else if(n>100 && n<=300)
    {
        amount = 500 + (n-100)*7;
        if(amount<=1200)
        {
            amount = (500 + (n-100)*7) - (500 + (n-100)*7)*0.1;
            printf("The electricity bill is: %.2f.",amount);
        }
        else{
            printf("The electricity bill is: %.2f.",amount);
        }
    }
    
    else if(n>300)
    {
        amount = 1900 + (n-300)*10;
        printf("The electricity bill is: %.2f.",amount);
    }
    else{
        printf("Invalid Input!");
    }
    
    
    return 0;
}
