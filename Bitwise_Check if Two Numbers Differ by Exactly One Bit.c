#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    // Calculate the XOR of a and b
    int xor_result = a ^ b;

    // Check if xor_result has exactly one set bit
    if (xor_result != 0 && (xor_result & (xor_result - 1)) == 0) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
