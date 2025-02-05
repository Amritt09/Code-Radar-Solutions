#include <stdio.h>

int findMSB(int num) {
    if (num == 0) {
        return -1; // No MSB for 0
    }

    int position = 0;

    // Loop through the bits of the number, starting from the leftmost bit
    while (num > 0) {
        num = num >> 1;  // Shift right by one bit
        position++;  // Move to the next bit
    }

    return position - 1;  // Position of the most significant bit
}

int main() {
    int a;
    scanf("%d", &a);  
    
n
    int msb_position = findMSB(a);
    
    if (msb_position == -1) {
        printf("Set");
    } else {
        printf("Not Set", msb_position);
    }
    
    return 0;
}
