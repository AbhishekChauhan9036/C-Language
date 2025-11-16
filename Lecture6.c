#include<stdio.h>
int main(){
    // for(int i = 1; i <= 5; i++){
    //     printf("%d\n", i);
    // }


    // int i = 1;
    // while(i <= 5){
    //     printf("%d\n", i);
    //     i++;
    // }

    // int i = 1;
    // do{
    //     printf("%d\n", i);
    //     i++;
    // } while(i <= 5);


    for(int i = 1; i <= 10; i++){
        if(i % 2 == 0){
            continue; // Skip even numbers
        }
        printf("%d\n", i);
        if( i == 7){
            break; // Exit loop when i is 7
        }
    }


    return 0;
}