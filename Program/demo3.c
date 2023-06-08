#include<stdio.h>

    int main(){
    int arr[5] = {1,2,3,4,5};
    for(int i = 0; i < 5; i++){
        printf("%z u ",&arr[i]);
    }
    return 0;
}

// #include <stdio.h>

// int main()
// {
// 	int a = 55;

// 	printf("The address of a is %p", &a);

// 	return 0;
// }