//
// Created by Admin on 10/11/2023.
//
#include <stdio.h>

int main()
{
    int choice, num1, num2;
    int sum, diff, product;
    float division;

    while (1) {
        printf("Menu:\n");
        printf("1. Input numbers\n");
        printf("2. Calculate sum\n");
        printf("3. Calculate subtraction\n");
        printf("4. Calculate multiplication\n");
        printf("5. Calculate division\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter two integer numbers: ");
                scanf("%d %d", &num1, &num2);
                break;
            case 2:
                sum = num1 + num2;
                printf("Sum: %d\n", sum);
                break;
            case 3:
                diff = num1 - num2;
                printf("Subtraction: %d\n", diff);
                break;
            case 4:
                product = num1 * num2;
                printf("Multiplication: %d\n", product);
                break;
            case 5:
                if (num2 != 0) {
                    division = (float)num1 / num2;
                    printf("Division: %.2f\n", division);
                } else {
                    printf("Error: Division by zero\n");
                }
                break;
            case 6:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    }

    return 0;
}
