#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if ((num >= 100 && num <= 999) || (num <= -100 && num >= -999)) {
        printf("%d is a 3-digit number.\n", num);
    } else {
        printf("%d is not a 3-digit number.\n", num);
    }
    return 0;
}