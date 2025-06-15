//4)Given an integer value, check the given input is divisible by 3. If it is divisible print the message "The number is divisible by 3".if it is not divisible print the message "The number is not divisible by 3 and gives a remainder _".

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int num;
    scanf("%d" , &num);
    if(num % 3 == 0){
        printf("The number is divisible by 3");
    }
    else if(num % 3 != 0){
        int rem = num % 3;
        printf("The number is not divisible by 3 and gives a remainder %d" , rem);
    }
    return 0;
}
