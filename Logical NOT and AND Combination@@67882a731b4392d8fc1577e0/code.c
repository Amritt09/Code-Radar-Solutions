#include<stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    // Check if both a and b are NOT greater than 0
    if (!(a > 0 && b > 0)) {
        printf("True");
    } else {
        printf("False");
    }

    return 0;
}
 