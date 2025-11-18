#include <stdio.h>

// Function declarations
void dif(int a, int b);
int sum(int a, int b);

int main()
{
    int fn, sn;
    printf("Enter first number: ");
    scanf("%d", &fn);
    printf("Enter second number: ");
    scanf("%d", &sn);

    printf("The sum is %d\n", sum(fn, sn));
    dif(fn, sn);

    return 0;
}

// Function definitions
int sum(int a, int b) {
    int sum = a + b;
    return sum;
}

void dif(int a, int b) {
    int diff = a - b;
    printf("The difference is %d\n", diff);
}
