// You are given T testcases in which each test case contains a series of size Ni numbers. Find min and max for each series.

// Input Format

// First line contains T. For each Testcase in T First line contains number of terms N. Next line contains N space separated numbers.

// Constraints

// -1000000009 < |T,N,Ai| < 1000000009

// Output Format

// For each testcase in T print a line contains two numbers min and then max.

// Sample Input 0

// 1
// 4
// 1 2 3 4

// Sample Output 0

// Min=1 Max=4

#include<stdio.h>

    int main(){
    int t, n;
    scanf("%d", &t);
    scanf("%d", &n);
    while(t--){
        
        int arr[n];
        for(int i = 0; i < n; i++){
            scanf("%d", &arr[i]);
        }
        int min = arr[0], max = arr[0];
        for(int j = 0; j < n-1; j++){
            if(min <= arr[j+1]){
                min = min; 
            }
            else{
                min = arr[j+1];
            }
            if(max >= arr[j+1]){
                max = max;
            }
            else{
                max = arr[j+1];
            }
        }
        printf("Min=%d Max=%d", min, max);

    }
    return 0;
}