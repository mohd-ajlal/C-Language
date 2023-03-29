// A and B are playing a game and A have given a number. B has to find next number which is both prime and palindrome. If B is not able to find the number in given range then he will lose the game. Help B to find the number.

#include<stdio.h>

    int main(){
        int num;
        printf("Enter a number by A: ");
        scanf("%d", &num);
        while(1){
            int numB;
            printf("Enter a number by B: ");
            scanf("%d", &numB);
            if(numB>num){
                int numB1 = numB, temp, sum_palindrome=0, rem;
                while(numB1!=0){
                    rem = numB1/10;
                    sum_palindrome = sum_palindrome*10 + rem;
                    numB1 = numB1/10;
                }
                if(sum_palindrome==numB){
                    int sum_prime=1;
                    for(int j = 1; j<=numB/2; j++){
                        if(numB%j==0){
                            sum_prime = sum_prime + 1;
                        }
                    }
                    if(sum_prime==2){
                        printf("B wins\n");
                        break;
                    }
                    else{
                        printf("Please enter again\n");
                    }
                }

            }
            else{
                printf("Please enter a number greater than %d\n", num);
            }
        }
    return 0;
}