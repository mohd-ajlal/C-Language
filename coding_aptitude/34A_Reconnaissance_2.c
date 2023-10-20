#include<stdio.h>
#include <stdlib.h>
// #include<math.h>

    int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 1; i <= n; i++){
        scanf("%d", &a[i]);
    }
    int min_height = 1000;
    int index1;
    int index2;
    int k;
    for(int i = 1; i<=n; i++){
        k = i+1;
        if(k>n){
            k=1;
        }
        if(abs(a[i] - a[k]) < min_height){
            min_height = abs(a[i] - a[k]);
            index1 = i;
            index2 = k;
        }
    }

    printf("%d %d", index1, index2);
    return 0;
}