// You are given a string S and another string A. Find if S contains A as substring.

// Input Format

// First line contains T, number of testcases. For each testcase, line contains space separated S and A

// Constraints

// 0 < |S|,|A| < 1000000

// Output Format

// For each testcase, print Yes or No.

// Sample Input 0

// 1
// abcd bc

// Sample Output 0

// Yes

#include<stdio.h>

    int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char s[1000000],a[1000000];
        scanf("%s %s",s,a);
        int i,j,flag=0;
        for(i=0;s[i]!='\0';i++){
            if(s[i]==a[0]){
                for(j=0;a[j]!='\0';j++){
                    if(s[i+j]!=a[j]){
                        break;
                    }
                }
                if(a[j]=='\0'){
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