#include<stdio.h>
#include<stdlib.h>
    int main(){
    int n, i;
    void *p;
    printf("Enter size: ");
    scanf("%d",&n);
    p = (int *)malloc(n*sizeof(int));
    printf("Enter value: ");
    for(i = 0; i < n; i++){
        scanf("%d", (p+i));
    }
    for(i = 0; i < n; i++){
        printf("%d", *(p+i));
    }
    free(p);
    return 0.;
}