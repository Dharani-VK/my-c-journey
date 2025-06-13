#include <stdio.h>

void checkPalindrome(int n){
    
    if( n < 0){
        printf("Negative numbers are not considered as Palindromes.\n");
        
    }
    
    else{
        int original = n;
        int rev = 0;
        while(n > 0){
            int last_digit = n% 10;
            rev = (rev*10) + last_digit;
            n = n/10;
        
        }
        
        if (rev == original){
            printf("The given number is Palindrome");
        }
        else{
            printf("The given number is not Palindrome");
        }
    }
    
}




int main()
{
    int num ;
    printf("Enter number to reverse it: ");
    scanf("%d" , &num);
    
    checkPalindrome(num);
    

    return 0;
}
