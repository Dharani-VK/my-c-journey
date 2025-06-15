//11)Based on the given marks, print the corresponding grade according to the following conditions Given a particular marks, a grade is calculated as per the following table: Score Grade 1. marks>=91 A 2. 76<=marks<=90 B 3. 61<=marks<=75 C 4. marks<=60 D

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int marks;
    scanf("%d" ,&marks);

        //1. marks>=91 A 2. 76<=marks<=90 B 3. 61<=marks<=75 C 4. marks<=60 D
    if(marks >= 91 ){
        printf("Grade A");
    }
    else if (marks >= 76 && marks <=99){
        printf("Grade B");
    }
    else if(marks >= 61 && marks <= 75){
        printf("Grade C");
    }
    else if(marks <= 60){
        printf("Grade D");
    }
    else{
        printf("Invalid");
    }
    return 0;
}

