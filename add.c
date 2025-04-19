#include <stdio.h>

// Function to add two numbers
int add(int c, int d) {
    int result = c + d;
    return result;
}

int main() {
    int num1, num2, result;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Call add function
    result = add(num1, num2);

    // Print the result
    printf("Result: %d\n", result);

    return 0;
}
