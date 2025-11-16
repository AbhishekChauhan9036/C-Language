#include<stdio.h>
int main(){
    // int num = 12;
    // if(num % 2 == 0){
    //     printf("The number %d is even.\n", num);
    // } else {
    //     printf("The number %d is odd.\n", num);
    // }
    // printf("%s", (num % 2 == 0) ? "Even Number\n" : "Odd Number\n");

    float a, b, result;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    char choice;
    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &choice);

    switch(choice) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            if(b != 0) {
                result = a / b;
            } else {
                printf("Error: Division by zero is not allowed.\n");
                return 1;
            }
            break;
        default:
            printf("Invalid operation.\n");
            return 1;
    }

    printf("Result: %.2f\n", result);

    return 0;
}