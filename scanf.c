#include <stdio.h>

int main() {
    int firstNumber;
    int secondNumber;
    int add, sub, mul, div, mod;

    // Getting user input
    printf("Enter first number: \n");
    scanf("%d", &firstNumber);

    printf("Enter second number: \n");
    scanf("%d", &secondNumber);

    // Perform operations
    add = firstNumber + secondNumber;
    sub = firstNumber - secondNumber;
    mul = firstNumber * secondNumber;
    div = firstNumber / secondNumber;  // Integer division
    mod = firstNumber % secondNumber;

    // Output results
    printf("The sum is %d\n", add);
    printf("The difference is %d\n", sub);
    printf("The product is %d\n", mul);
    printf("The quotient is %d\n", div);
    printf("The remainder is %d\n", mod);

    return 0;
}
