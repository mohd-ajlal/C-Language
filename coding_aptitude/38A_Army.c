#include<stdio.h>

    int main(){
    int rank;
    scanf("%d",&rank);
    int arr[rank-1];
    for(int i = 1; i <= rank-1; i++){
        scanf("%d",&arr[i]);
    }
    int st_rank, end_rank;
    scanf("%d %d",&st_rank ,&end_rank);
    int year = 0;
    for(int i = st_rank; i<end_rank; i++){
        year+= arr[i];
    }

    printf("%d", year);
    return 0;
}