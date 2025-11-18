#include <stdio.h>
#define PI 3.14

int main() {
    float area, radius;
    printf("Enter the radius of a circle:\n");
    scanf("%f", &radius);

    area = PI * radius * radius;

    // final result
    printf("The area of a circle is %f\n", area);
    return 0;
}
