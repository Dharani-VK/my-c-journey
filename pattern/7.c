/*7)Write a program to accept the n value and display the below pattern

Input Format

Accept n values of input

Constraints

NIL

Output Format

Pattern

Sample Input 0

5
Sample Output 0

54321
4321
321
21
1
Sample Input 1

7
Sample Output 1

7654321
654321
54321
4321
321
21
1
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d" , &n);
    for (int  i =0 ; i < n ; i++){
        for(int  j = n-i ; j >= 1 ; j--){
            printf("%d" , j);
        }
        printf("\n");
    }
    return 0;
}



