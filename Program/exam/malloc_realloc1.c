#include<stdio.h>
#include<stdlib.h>
    int main(){
    int *p;
    p = (int*)malloc(5*sizeof(int));
    for(int i = 0; i<5; i++){
        scanf("%d", &p[i]);
    }
    p = (int*)realloc(p, 2*sizeof(int));
    for(int i = 0; i<2; i++){
        scanf("%d", &p[i]);
    }
    for(int i = 0; i<2; i++){
        printf("%d ", p[i]);
    }
    free(p);
    return 0;
}