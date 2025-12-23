#include <stdio.h>

// Function prototype for the swap function
// It takes two integer pointers as parameters
void swap(int *a, int *b);

int main() {
    int num1 = 10, num2 = 20;

    // Display numbers before swapping
    printf("Before swap: num1 = %d, num2 = %d\n", num1, num2);

    // Call the swap function, passing the addresses of num1 and num2
    // The '&' operator is used to get the memory address of the variables
    swap(&num1, &num2);

    // Display numbers after swapping
    printf("After swap: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}