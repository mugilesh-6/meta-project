#include <stdio.h>

int main() {
    int arr[5];
    printf("Enter 5 numbers:\n");
    for (int i = 0; i <=4; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Numbers in straight order: ");
    for (int i = 0; i <=4; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Numbers in reverse order: ");
    for (int i = 4; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
