// #include<stdio.h>

//     int main(){
//     int n1, n2;
//     scanf("%d\n%d",&n1, &n2);
//     int arr[n1*n2];
//     for(int i = 0; i < n1; i++){
//         for(int j =0; j < n2; j++){
//         scanf("%d",&arr[j]);
//     }
//     for(int j = 0; j < n2; j++){
//         printf("%d",arr[j]);
//     }
//     }
//     // printf("Helllo");
//     return 0;
// }

#include<stdio.h>

    int main(){
    int arr[5] = {3,1,4,4,5};
    int arr1 = arr[1];
    printf("%d\n",arr1);
    int min = arr[0];
    for(int j = 1; j < 4; j++){
                if(min <= arr[j+1]){
            min = min; 
        }
        else{
            min = arr[j+1];
        }
    }
    return 0;
}