/*3)Print the sum of nos from 1 to n.

Input Format

Integer

Constraints

Nil

Output Format

Integer

Sample Input 0

10
Sample Output 0

55
Sample Input 1

5
Sample Output 1

15 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, sum = 0;
    scanf("%d" , &n);
    
    for(int i = 1; i <= n ; i++){ 
        sum = sum+i;
    }
    printf("%d" , sum);
    return 0;
}

