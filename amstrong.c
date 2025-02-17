#include <stdio.h>

int main() {
    int num, original_num, remainder, result = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    original_num = num;

    while (original_num != 0) {
        remainder = original_num % 10;
        result += remainder * remainder * remainder;
        original_num /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
