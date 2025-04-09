#include <stdio.h>

int main() {
    float a = 5.0;
    int b = 2;
    int c = 7;

    // Arithmetic operators
    printf("%f\n", a + b);
    printf("%f\n", a - b);
    printf("%f\n", a * b);
    printf("%f\n", a / b);
    printf("%d\n", c % b);

    // Relational operators
    printf("%d\n", a > b);
    printf("%d\n", a < b);
    printf("%d\n", a >= b);
    printf("%d\n", a <= b);
    printf("%d\n", a == b);
    printf("%d\n", a != b);

    // Logical operators
    printf("%d\n", (a > b) && (c > b));
    printf("%d\n", (a < b) || (c > b));
    printf("%d\n", !(a == b));

    return 0;
}
