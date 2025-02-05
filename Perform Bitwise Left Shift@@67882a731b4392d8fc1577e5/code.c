#include <stdio.h>

int main() {
    int a, b, shift_amount;
    
    
    scanf("%d %d %d", &a, &b, &shift_amount);
    
    
    int result_a = a << shift_amount;
    int result_b = b << shift_amount;
        int combined_result = result_a | result_b;
    

    printf("Result of a << %d: %d\n", shift_amount, result_a);
    printf("Result of b << %d: %d\n", shift_amount, result_b);
    printf("Combined result (a | b): %d\n", combined_result);
    
    return 0;
}
