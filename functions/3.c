/*Write a program to accept a float value and an integer as input. The integer represents the precision. Print the float value according to the precision.

Input Format

Float Integer

Constraints

none

Output Format

Float

Sample Input 0

123.4567 2
Sample Output 0

123.46
Sample Input 1

987.346732 3
Sample Output 1

987.347
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    float num;
    int precision;
    scanf("%f %d", &num,&precision);
    printf("%.*f" ,precision, num);
    return 0;
}
