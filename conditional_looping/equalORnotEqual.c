//2)Given 2 integer input check whether the 2 input are "Equal" or "Not Equal" print the corresponding message

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int a,b;
    scanf("%d %d" , &a,&b);
    if(a == b){
        printf("Equal");
    }
    else{
        printf("Not Equal");
    }
    return 0;
}
