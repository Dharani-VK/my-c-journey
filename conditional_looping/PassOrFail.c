//12)Given a student's mark as input,print output as Pass/Fail based on the input mark < 35 - Fail mark>=35- Pass

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    //mark < 35 - Fail mark>=35- Pass
    int marks;
    scanf("%d" , &marks);
    if(marks >= 35){
        printf("Pass");
    }
    else if(marks < 35){
        printf("Fail");
    }
    else{
        printf("Invalid");
    }
    return 0;
}
