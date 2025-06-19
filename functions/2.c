/*Write a program to accept a number as input (Octal or Hexadecimal) from the user and print it decimal equivalent.

Input Format

Integer

Constraints

none

Output Format

Integer

Sample Input 0

0144
Sample Output 0

100
Sample Input 1

0x64
Sample Output 1

100
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int num;
    scanf("%i" ,&num);
    printf("%d" , num);
    return 0;
}
