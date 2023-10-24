// A. Haiku
// time limit per test
// 2 seconds
// memory limit per test
// 256 megabytes
// input
// standard input
// output
// standard output

// Haiku is a genre of Japanese traditional poetry.

// A haiku poem consists of 17 syllables split into three phrases, containing 5, 7 and 5 syllables correspondingly (the first phrase should contain exactly 5 syllables, the second phrase should contain exactly 7 syllables, and the third phrase should contain exactly 5 syllables). A haiku masterpiece contains a description of a moment in those three phrases. Every word is important in a small poem, which is why haiku are rich with symbols. Each word has a special meaning, a special role. The main principle of haiku is to say much using a few words.

// To simplify the matter, in the given problem we will consider that the number of syllable in the phrase is equal to the number of vowel letters there. Only the following letters are regarded as vowel letters: "a", "e", "i", "o" and "u".

// Three phases from a certain poem are given. Determine whether it is haiku or not.
// Input

// The input data consists of three lines. The length of each line is between 1 and 100, inclusive. The i-th line contains the i-th phrase of the poem. Each phrase consists of one or more words, which are separated by one or more spaces. A word is a non-empty sequence of lowercase Latin letters. Leading and/or trailing spaces in phrases are allowed. Every phrase has at least one non-space character. See the example for clarification.
// Output

// Print "YES" (without the quotes) if the poem is a haiku. Otherwise, print "NO" (also without the quotes).
// Examples
// Input

// on  codeforces 
// beta round is running
// a rustling of keys 

// Output

// YES

// Input

// how many gallons
// of edo s rain did you drink
// cuckoo

// Output
// No

#include<stdio.h>
#include<string.h>
    int main(){
        char str[3][101];
        int count[3] = {0};

        for(int i = 1; i<=3; i++){
            gets(str[i]);
            for(int j = 1; j<strlen(str[i]); j++){
                if(str[i][j] == 'a' || str[i][j] == 'e' || str[i][j] == 'i' || str[i][j] == 'o' || str[i][j] == 'u'){
                    count[i]++;
                }
            }
        }

        if(count[1] == 5  && count[2] == 7 && count[3] == 5){
            printf("yes");
        }else{
            printf("no");
        }
    return 0;
}