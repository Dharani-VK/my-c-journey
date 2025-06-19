/*Write a program to accept 2 numbers as input from the user. Print the 2 numbers such that the second number is 19 width spaces away from the first.

Input Format

Integer Integer

Constraints

none

Output Format

Integer Integer

Sample Input 0
25 35

Sample Output 0
2500000000000000035

Sample Input 1
12 123

Sample Output 1
1200000000000000123
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int check(int a){
    int count=0;
    while(a != 0){
        count++;
        a/=10;
    }
    
    
    
    return count;
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int a,b;
    scanf("%d %d" , &a,&b);
    int digit_a = check(a);
    int digit_b = check(b);
    int total_digits = digit_a+digit_b;
    int rem = 19 - total_digits;
    printf("%d" , a);
    for (int i =0 ; i < rem ; i++){
        printf("0");
    }
    printf("%d" , b);
        
    return 0;
}
