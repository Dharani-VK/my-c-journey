/*Given 2 nos, Print the first number as a 5-digit Number and Print the Second number in the Next Line with 5 width space

Input Format

Integer Integer

Constraints

none

Output Format

Integer Integer

Sample Input 0

25 98
Sample Output 0

00025
   98
Sample Input 1

12345 12
Sample Output 1

12345
   12

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int check(int a){
    int count =0;
    while(a!=0){
        count++;
        a/=10;
    }
    return count;
}


int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n1,n2;
    scanf("%d %d" , &n1, &n2);
    
    int digit_n1 = check(n1);
    int digit_n2 = check(n2);
    int rem1= 5-digit_n1;
    int rem2= 5-digit_n2;
     
    for(int i =0 ; i < rem1; i++){
        printf("0");
    }
    printf("%d" ,n1);
    printf("\n");
    
    for(int i =0 ; i < rem2; i++){
        printf(" ");
    }
    printf("%d" , n2);
    printf("\n");
    
    return 0;
}
