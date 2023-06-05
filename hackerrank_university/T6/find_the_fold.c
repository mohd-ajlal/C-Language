// You are given a square matrix of size N x N. Somebody might have folded the matrix from Left, Right, Top or Bottom. The side which has been folded, has all the values as 0, if folded. You have to find whether the matrix has been folder or not. If matrix has been folded, print Folded and then the side from where it is folded. If not, print Not Folded.

// Input Format

// First line contains N. Next N lines contains N space separated integers.

// Constraints

// 0 < |N,Aij| < 10000000000000

// Output Format

// Print Folded or Not Folded. Print Side of fold, if folded.

// Sample Input 0

// 4
// 1 2 3 4
// 4 5 6 8
// 0 0 0 0
// 0 0 0 0

// Sample Output 0

// Folded
// Bottom

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

    int main(){
    int n;
    scanf("%d",&n);
    int a[n][n];
    int i,j;
    int flag = 0;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i = 0; i < n; i++){
        if(a[0][i] == 0){
            flag += 1;
        }
    }

    if(flag == n){
        printf("Folded\nTop");
    }
    else{
        flag = 0;   
        for(i = 0; i < n; i++){
            if(a[n-1][i] == 0){
                flag += 1;
            }
        }
        if(flag == n){
            printf("Folded\nBottom");
        }
        else{
            flag = 0;
            for(i = 0; i < n; i++){
                if(a[i][0] == 0){
                    flag += 1;
                }
            }
            if(flag == n){
                printf("Folded\nLeft");
            }
            else{
                flag = 0;
                for(i = 0; i < n; i++){
                    if(a[i][n-1] == 0){
                        flag += 1;
                    }
                }
                if(flag == n){
                    printf("Folded\nRight");
                }
                else{
                    printf("Not Folded");
                }
            }
        }
    }
    return 0;
}