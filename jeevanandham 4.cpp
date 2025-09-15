#include <stdio.h>

int main() {
    int num1, num2;
    int difference;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    difference = (num1 > num2) ? (num1 - num2) : (num2 - num1);
    if (difference % 2 == 0) {
        printf("The difference between %d and %d is %d, which is an EVEN number.\n", num1, num2, difference);
    } else {
        printf("The difference between %d and %d is %d, which is an ODD number.\n", num1, num2, difference);
    }

    return 0;
}