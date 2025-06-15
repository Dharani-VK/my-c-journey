//20)Write a program to Check Odd or Even without Using Arithmetic Operators

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    scanf("%d" , &n);
    if (n &1){
        printf("Odd");
    }
    else{
        printf("Even");
    }
    return 0;
}
