#include <stdio.h>

int main() {

    float incm;
    float tax;
    
    scanf("%f",&incm);
    if(incm>=0 && incm<=250000){
        printf("0.00");
    }
   else if(incm>250000 && incm<500000){
        tax= (incm-250000)*0.05;
        printf("%.2f",tax);
    }
    else if(incm>=500000 && incm<1000000){
        tax= 250000*0.05 + (incm-500000)*0.2;
        printf("%.2f", tax);
    }
    else if(incm>=1000000){
        tax= 250000*0.05 + 500000*0.2 + (incm-1000000)*0.3;
        printf("%.2f", tax);
    }
    else{
        printf("INVALID");
    }
    return 0;
}
