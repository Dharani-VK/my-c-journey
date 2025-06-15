//1)Given a number,check whether it is "Odd " or "Even"

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a;
    scanf("%d" , &a);
    if(a%2 == 0){
        printf("Even");
    }
    else if (a%2 != 0){
        printf("Odd");
    }
    else{
        printf("Invalid Input");
    }
    return 0;
}
