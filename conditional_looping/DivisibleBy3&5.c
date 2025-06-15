//5)Given an integer value, if it is divisible by 3 print “Hi”, if it is divisible by 5 print “Hello”. If it is divisible by both print “HiHello”

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int num;
    scanf("%d", &num );
    if(num % 3 == 0 && num %5 == 0){
        printf("HiHello");
    }
    else if(num % 3 == 0){
        printf("Hi");
    }
    else if (num % 5 == 0 ){
        printf("Hello");
    }
    else{
        printf("Invalid Input");
    }
    return 0;
}
