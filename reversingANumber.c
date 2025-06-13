#include <stdio.h>

int reverseNumber(int n){
    int rev = 0;;
    while(n > 0){
        int last_digit = n%10;
        rev = (rev *10)+last_digit;
        n = n/10;
    }
    return rev;
}

int reversingANumber()
{
    int num ;
    printf("Enter number to reverse it: ");
    scanf("%d" , &num);
    
    int result = reverseNumber(num);
    printf("%d" , result);

    return 0;
}
