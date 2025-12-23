#include <stdio.h>

int main() {
    int num1, num2;
    int sum, difference, product, modulus_result;
    float quotient;
    printf("Enter first integer: ");
    scanf("%d", &num1);
    printf("Enter second integer: ");
    scanf("%d", &num2);
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    
    
    quotient = (float)num1 / num2; 
    modulus_result = num1 % num2;
    printf("\n--- Results ---\n");
    printf("Addition: %d\n", sum);
    printf("Subtraction: %d\n", difference);
    printf("Multiplication: %d\n", product);
    printf("Division: %.2f\n", quotient); // .2f formats the float to two decimal places
    printf("Modulus: %d\n", modulus_result);
    return 0;
}