#include<stdio.h>
int main(){
    int age = 25;
    float salary = 55000.50;
    char grade = 'A';
    printf("Age: %d\n", age);
    printf("Salary: %.2f\n", salary);
    printf("Grade: %c\n", grade);

    int a = 10, b = 12;
    int sum = a + b;
    printf("Sum: %d\n", sum);
    int sub = a - b;
    printf("Sub: %d\n", sub);
    printf("%d\n" , a == b);
    printf("%d\n" , ++a);
    printf("%d\n" , b--);

    return 0;
}