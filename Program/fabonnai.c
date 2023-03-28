// 5 =  0 1 1 2 3

#include<stdio.h>

    int main(){
    int n, n1 = 0, n2 = 1;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("%d %d ", n1, n2);
    for(int i = 3; i<=n; i++){
        int n3 = n1 + n2;
        printf("%d ", n3);
        n1 = n2;
        n2 = n3;
    }
    return 0;
}