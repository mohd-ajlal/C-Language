#include<stdio.h>

    int main(){
    int a[5] = {10, 20, 30, 40, 50};
    int *p = &a;
    p = p + 1; // p + 1 * size of data type
    printf("%d\n",*p);
    printf("%d\n",*p++);
    printf("%d\n",*++p);
    printf("%d\n",++*p);
    
    return 0;
}