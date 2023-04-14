#include<stdio.h>

    int main(){
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        int arr[3], out;
        for(int j=0; j<3; j++){
            scanf("%d",&arr[j]);
        }
        out = (arr[1] / arr[0])  * arr[2];
        printf("%d\n",out);
    }
    return 0;
}