#include <stdio.h>

int findMSB(int num) {
    if (a == 0) {
        return -1; 
    }

    int position = 0;

    while (a> 0) {
        a = a >> 1;  
        position++; 
    }

    return position - 1;  
}

int main() {
    int a;
    scanf("%d", &a);  
    int msb_position = findMSB(a);
    
    if (msb_position == -1) {
        printf("Set");
    } else {
        printf("Not Set", msb_position);
    }
    
    return 0;
}
