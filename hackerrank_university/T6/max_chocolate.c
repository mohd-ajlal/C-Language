// You have N chocolates. You have to distribute it among certain no of students such that each student gets equal number of chocolates and more than one. Find the maximum number of chocolates each student will get. If there is a way such that more than one student can get the chocolates, use the way.

// Let's say N = 10. Possible distributions are as follows -

//     1,1,1,........1 i.e. first 10 students get 1 chocolate each.
//     2,2,2,2,2 i.e. first 5 students get 2 chocolates each.
//     5,5 i.e. first 2 students get 5 chocolates each.
//     10 i.e. the first student gets all the 10 chocolates.

// Since, we need to distribute chocolates s.t. each student gets more than 1 chocolate, first distribution is discarded. In the last distribution, the no of student is 1 whereas 2 distributions are possible s.t. no of students is > 1. So, we discard the last distribution too. In the remaining, 2nd & 3rd distribution, no of students is > 1 but the no of chocolates each students gets is 5, which is more than what each student gets in 2nd distribution. So, we go with the 3rd distribution.

// Input Format

// First line contains T, number of testcases. For each testcase, single line contains a number N.

// Constraints

// 0 < |N| < 1000000000000

// No of students >= N

// Output Format

// For each testcase, print number of chocolates each student will get as an integer.

// Sample Input 0

// 1
// 1271372539

// Sample Output 0

// 1439833

// Sample Input 1

// 1
// 4

// Sample Output 1

// 2


#include<stdio.h>

    int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long int n;
        scanf("%lld",&n);
        long long int i;
        for(i=n/2;i>=1;i--){
            if(n%i==0){
                printf("%lld\n",i);
                break;
            }
        }
    }
    return 0;
}