/*1)Write a program to accept the n value and display the below pattern
Sample Input 0
4

Sample Output 0
****
****
****
****
Sample Input 1
7

Sample Output 1
*******
*******
*******
*******
*******
*******
*******
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    scanf("%d" , &n);
    for(int i = 0; i<n ;i++){
        for(int j=0;j<n; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
