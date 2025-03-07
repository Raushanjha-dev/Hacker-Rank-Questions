#include <stdio.h>

int main() {
    int n, a, b, c, d, A, B, C, D;
    scanf("%d %d %d %d %d %d %d %d %d", &n, &a, &b, &c, &d, &A, &B, &C, &D);

   
    if (n == 0) {
        printf("Circle");
    }
    
    else if (n == 3) {
        
        if (a > 0 && b > 0 && c > 0 && d > 0 && A > 0 && B > 0 && (d + A + B == 180) &&
            (a + b > c) && (a + c > b) && (b + c > a)) {
            
            if (a == b && b == c && d == 60 && A == 60 && B == 60) {
                printf("Equilateral Triangle");
            } else if (a == b || b == c || a == c) {
                printf("Isosceles Triangle");
            } else {
                printf("Scalene Triangle");
            }
        } else {
            printf("Invalid Figure");
        }
    }
    
    else if (n == 4) {
       
        if (a > 0 && b > 0 && c > 0 && d > 0 && A > 0 && B > 0 && C > 0 && D > 0 &&
            (A + B + C + D == 360)) {
            
            if (a == b && b == c && c == d) {
                if (A == 90 && B == 90 && C == 90 && D == 90) {
                    printf("Square");
                } else if (A == C && B == D && A + B == 180) {
                    printf("Rhombus");
                } else {
                    printf("Invalid Figure");
                }
            } else if (a == c && b == d) {
                if (A == 90 && B == 90 && C == 90 && D == 90) {
                    printf("Rectangle");
                } else if (A == C && B == D) {
                    printf("Parallelogram");
                } else {
                    printf("Invalid Figure");
                }
            } else {
                printf("Invalid Figure");
            }
        } else {
            printf("Invalid Figure");
        }
    }
    
    else {
        printf("Invalid Figure");
    }

    return 0;
}
