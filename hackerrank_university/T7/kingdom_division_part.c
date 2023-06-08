// Raja have a kingdom which consists of assets represented by lowercase english alphabets. This is the time for division of kingdom. He do not have any son,so he is going to divide his kingdom among his helpers. He has to divide his kingdom in such a way that maximum number assets can be given to helpers equally. (If there is any asset that can not be divided, it will be wasted and if an asset is being divided, it should be divided equally or all assets of that type must not be divided). Find how many types assets can be divided and to how many helpers. If there are multiple combinations, print the one where number of helpers is maximum.

// Input Format

// First line contains T, number of testcases. For each testcase, single line contains a string S.

// Constraints

// 0 < |S| < 1000000

// Output Format

// T lines where each line contains space separated N number of assets and H number of helpers.

// Sample Input 0

// 1
// aaabbbccdd

// Sample Output 0

// 2 3

// Explanation 0

// Raja can give one a and one b to three helpers.
#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t); // Number of testcases

    while (t--) {
        char str[1000000];
        scanf("%s", str); // Input string

        int len = strlen(str); // Length of string
        int count[26] = {0}; // Array to store count of each character

        for(char i = 'a'; i <= 'z'; i++){
            for(int j = 0; j < len; j++){
                if(str[j] == i){
                    count[i - 'a']++;
                }
            }
            
        } 

    }
    return 0;
}
