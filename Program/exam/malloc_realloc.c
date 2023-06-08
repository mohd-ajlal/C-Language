#include<stdio.h>
#include<stdlib.h>
    int main(){
    int *p, n, i;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    p = (int*)malloc(n*sizeof(int));
    for(int i = 0; i<n; i++){
        scanf("%d", &p[i]);
    }
    for(int i = 0; i<n; i++){
        printf("%d ", p[i]);
    }
    printf("\n");
    printf("Enter the new size of array: ");
    scanf("%d", &n);
    p = realloc(p, n*sizeof(int));
    for(int i = 0; i<n; i++){
        scanf("%d", &p[i]);
    }
    for(int i = 0; i<n; i++){
        printf("%d ", p[i]);
    }
    free(p);
    return 0;
}