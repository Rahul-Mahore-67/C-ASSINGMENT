#include <stdio.h>

/* Function prototype for the max function */
int findMax(int *num1, int *num2);

int main() {
    int a, b, max_val;

    printf("Enter two numbers: ");
    /* Use the address-of operator (&) to pass the memory addresses */
    scanf("%d %d", &a, &b);

    /* Pass the addresses of a and b to the findMax function */
    max_val = findMax(&a, &b);

    printf("The maximum of %d and %d is %d\n", a, b, max_val);

    return 0;
}
int findMax(int *num1, int *num2) {

    if (*num1 > *num2) {
        return *num1;
    } else {
        return *num2;
    }
}