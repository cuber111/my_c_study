#include<stdio.h>

int main(){
    printf("the size of integers: %zu bit\n" , sizeof(int));
    printf("the size of character: %zu bit\n" , sizeof(char));
    printf("the size of float: %zu bit\n" , sizeof(float));
    
    return 0;
}