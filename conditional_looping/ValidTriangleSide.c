//13)Write a program to check whether the given three sides can form a triangle or not.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int a,b,c;
    scanf("%d %d %d", &a, &b,&c);
    if (a > b && a > c){
        if(b < c){
            printf("Valid");
        }
        else{
            printf("Not Valid");
        }
        
    }else{
        printf("Not Valid");
    }
    return 0;
}
