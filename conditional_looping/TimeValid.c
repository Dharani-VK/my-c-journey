//7)Write a program to check whether the time is valid or not

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int a,b,c ;
    scanf ("%d:%d:%d" , &a,&b,&c);
    if ( a > 24 || b >60 || c > 60){
        printf("Not Valid");
        
    }
    else{
        printf("Valid");
    }
    //if else ( a )
    return 0;
}
