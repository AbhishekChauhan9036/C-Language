#include<stdio.h>
int main() {
    int num = -10;
    if(num>0){
        printf("The number %d is positive.\n", num);
    }else{
        printf("The number %d is negative.\n", num);
    }

    int age = 5;
    if(age > 18){
        printf("You are eligible to vote.\n");
    }else if(age == 18){
        printf("You just became eligible to vote.\n");
    }
    else{
        printf("You are not eligible to vote.\n");
    }

    int marks = 95;
    if(marks >= 90){
        if(marks == 100){
            printf("Outstanding! You scored a perfect 100.\n");
        }else{
            printf("Excellent! You scored an A grade.\n");
        }
    }
    else if(marks >= 75){
        printf("Very Good! You scored a B grade.\n");
    }
    else if(marks >= 60){
        printf("Good! You scored a C grade.\n");
    }
    else{
        printf("You need to work harder. You scored below C grade.\n");
    }

    int a = 10;
    int b = 7;
    if(a > 5 && b < 10){
        printf("Both conditions are true.\n");
    }

    /**
     *  1 && 1 = 1
     *  1 && 0 = 0
     *  0 && 1 = 0
     *  0 && 0 = 0
     * 
     *  1 || 1 = 1
     *  1 || 0 = 1
     *  0 || 1 = 1
     *  0 || 0 = 0
     */

    return 0;
}