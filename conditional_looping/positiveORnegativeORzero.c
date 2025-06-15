//3)Given an integer input , whether the given input is "Positive" or "Negative" or "Zero" and print the corresponding message

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int num;
    scanf("%d" , &num);
    if(num > 0){
        printf("Positive");
    }
    else if (num == 0){
        printf("Zero");
    }
    else {
        printf("Negative");
    }
    return 0;
}
