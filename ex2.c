//
// Created by Admin on 10/11/2023.
//
#include <stdio.h>

//int main()
int bbb222()
{
    int numbers[10];

    // Input 10 integers
    for (int i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Display them in reverse order
    printf("Reversed Order:\n");
    for (int i = 9; i >= 0; i--) {
        printf("+number %d: %d\n", 10 - i, numbers[i]);
    }

    return 0;
}