#include <stdio.h>

int reverseNumber(int n){
    int rev = 0;
    int sign = (n<0) ? -1 : 1 ;
    n = n*sign;
    while(n > 0){
        int last_digit = n%10;
        rev = (rev *10)+last_digit;
        n = n/10;
    }
    return rev *sign;
}

int reverseWithSign()
{
    int num ;
    printf("Enter number to reverse it: ");
    scanf("%d" , &num);
    
    int result = reverseNumber(num);
    printf("%d" , result);

    return 0;
}
