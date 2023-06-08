// You are given a string S. Find if there is any possible string which can be formed with the same set of characters as in string S and lexicographically smaller then S then print Yes otherwise print No.

// Input Format

// First line contains T, number of testcases. For each testcase, single line contains a string S.

// Constraints

// 0 < |S| < 1000000

// Output Format

// T lines where each line contains either Yes or No.

// Sample Input 0

// 1
// bac

// Sample Output 0

// Yes

#include<stdio.h>

    int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char s[1000000];
        scanf("%s",s);
        int i,j,flag=0;
        for(i=0;s[i]!='\0';i++){
            for(j=i+1;s[j]!='\0';j++){
                if(s[i]>s[j]){
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
    return 0;
}