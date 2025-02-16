#include <stdio.h>

int main() {
    int budget, numguest, food, deco, music, extexp, cost;
    scanf("%d %d %d %d %d %d", &budget, &numguest, &food, &deco, &music, &extexp);
    
    if (numguest > 5 && numguest <= 25) {
        if (deco < budget * 0.30 || (numguest * food) < budget * 0.50) {
            cost = numguest * food + deco + extexp + music;
            if (budget >= cost) {
                printf("Celebration Approved");
            } else {
                printf("Celebration Denied");
            }
        } else {
            printf("Celebration Denied");
        }
    } 
    else if (numguest > 25 && numguest <= 50) {
        if ((deco < budget * 0.30 || (numguest * food) < budget * 0.50) && music > 0) {
            cost = numguest * food + deco + extexp + music;
            if (budget >= cost) {
                printf("Celebration Approved");
            } else {
                printf("Celebration Denied");
            }
        } else {
            printf("Celebration Denied");
        }
    } 
    else {
        printf("Celebration Denied");
    }

    return 0;
}
