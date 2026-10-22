#include<stdio.h>

int main(){
    printf("the size of integers: %zu bit\n" , sizeof(int)*8);
    printf("the size of character: %zu bit\n" , sizeof(char)*8);
    printf("the size of float: %zu bit\n" , sizeof(float)*8);
    
    return 0;
}