// Any integer is input through the keyboard. write a program to find out whether it is even or odd
#include<stdio.h>
int main(){
    int a=2;
    // scanf("%d", &a);
    if(a%2==0){
        printf("Even");
    }
    else{
        printf("Odd");
    }
    return 0;
}