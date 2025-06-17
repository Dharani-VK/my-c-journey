/*2)//Write a program to accept the n value and display the below pattern

Input Format

Accept n values of input

Constraints

nil

Output Format

Pattern

Sample Input 0

3 7
Sample Output 0

*******
*******
*******
Sample Input 1

3 9
Sample Output 1

*********
*********
*********
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int row;
    int col;
    scanf("%d" , &row);
    scanf("%d" , &col);
    for (int i =0 ;i<row ; i++){
        for(int j=0 ; j<col ; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
