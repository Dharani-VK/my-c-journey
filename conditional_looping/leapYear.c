//6)Given a year, check whether it is a leap year

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int num ;
    scanf("%d" , &num);
    if(num % 4 == 0){
        if ( num % 100 == 0){
            if(num % 400 == 0){
                printf("Leap Year");
            }else{
                printf("Not a Leap Year");
            }
            
        }else{
            printf("Leap Year");
        }
    
    }else{
        printf("Not a Leap Year");
    }
    
    return 0;
}
