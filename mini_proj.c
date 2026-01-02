#include <stdio.h>

void printNumbers(int N) {
    for (int i = 1; i <= N; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

void printEven(int N) {
    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

void printOdd(int N) {
    for (int i = 1; i <= N; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {

    int choice, N;

    printf("------- MENU -------\n");
    printf("1. Print numbers from 1 to N\n");
    printf("2. Print even numbers up to N\n");
    printf("3. Print odd numbers up to N\n");
    printf("4. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice >= 1 && choice <= 3) {
        printf("Enter value of N: ");
        scanf("%d", &N);
    }

    switch (choice) {
        case 1:
            printNumbers(N);
            break;

        case 2:
            printEven(N);
            break;

        case 3:
            printOdd(N);
            break;

        case 4:
            printf("Exiting program...\n");
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
