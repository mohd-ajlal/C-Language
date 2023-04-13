// Farmer Ramu has three fields with potatoes planted in them. He harvested x potatoes from the first field, y potatoes from the second field and is yet to harvest potatoes from the third field. Ramu is very superstitious and believes that if the sum of potatoes he harvests from the three fields is a prime number , he'll make a huge profit. Please help him by calculating for him the minimum number of potatoes that if harvested from the third field will make the sum of potatoes prime. At least one potato should be harvested from the third field.

// Input Format

// The first line of the input contains an integer T denoting the number of test cases. Each of the next T lines contain 2 integers separated by single space: x and y.

#include<stdio.h>

    int main(){
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        int arr[2];
        for(int j=0; j<2; j++){
            scanf("%d",&arr[j]);
        }
        int sum = arr[0] + arr[1];
        int flag = 0;
        while(flag == 0){
            sum++;
            int count = 0;
            for(int k=2; k<sum; k++){
                if(sum%k == 0){
                    count++;
                }
            }
            if(count == 0){
                flag = 1;
            }
        }
        printf("%d\n", sum - (arr[0] + arr[1]));
        
    }
    return 0;
}