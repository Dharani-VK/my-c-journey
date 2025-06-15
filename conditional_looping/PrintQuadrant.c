//18)Write a program to Based on the given x and y value, calculate the quadrant in which the point is present.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a,b;
    scanf("%d %d" , &a,&b);
    if(a == 0 && b==0 ){
        printf("Point lies at the origin");
    }
    else if(a > 0 && b> 0){
        printf("Point lies in the First quandrant");
    }
    else if(a<0 && b >0){
        printf("Point lies in the Second quandrant");
    }
    else if(a < 0 && b< 0){
        printf("Point lies in the Third quandrant");
    }
    else{
        printf("Point lies in the Fourth quandrant");
    }
    return 0;
}
