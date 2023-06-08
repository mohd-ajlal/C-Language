#include<stdio.h>

    int fun(int n); // function prototype/declaration
    int main(){
    int n = 10;
    fun(n); // function call
    return 0;
}

int fun(int n){ // function definition
    if(n%2==0){
        printf("Even");
    }
    else{
        printf("Odd");
    }
}