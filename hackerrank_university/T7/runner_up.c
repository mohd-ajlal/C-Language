// You are given a string S. Find the second maximum occuring character. If there are more than one characters that satisfy the given condition, print the smallest. If all the characters are occuring same number of times, print -1.

// Input Format

// First line contains T, number of testcases. For each testcase, single line contains a string S.

// Constraints

// 0 < |S| < 1000000

// Output Format

// T lines where each line C, the second maximum occuring character or -1

// Sample Input 0

// 1
// abb

// Sample Output 0

// a

// Sample Input 1

// 1
// aabb

// Sample Output 1

// -1

#include <stdio.h>
#define NO_OF_CHARS 256

// C function to find the second most frequent character
// in a given string 'str'
char getSecondMostFreq(char *str)
{
	int count[NO_OF_CHARS] = {0}, i;
	for (i=0; str[i]; i++)
		(count[str[i]])++;

	int first = 0, second = 0;
	for (i = 0; i < NO_OF_CHARS; i++)
	{
		if (count[i] > count[first])
		{
			second = first;
			first = i;
		}
		else if (count[i] > count[second] &&
				count[i] != count[first])
			second = i;
	}

	return second;
}

int main()
{
int t;
scanf("%d",&t);
while(t--){
    char s[1000000];
    scanf("%s",s);
    char res = getSecondMostFreq(s);
    if (res != '\0')
        printf("%c\n", res);
    else
        printf("-1\n");
}
return 0;
}
