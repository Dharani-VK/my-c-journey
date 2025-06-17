/*5)Write a program to accept the n value and display the below pattern

Input Format

Accept n values of input

Constraints

nil

Output Format

Pattern

Sample Input 0

5
Sample Output 0

1
12
123
1234
12345
Sample Input 1

7
Sample Output 1

1
12
123
1234
12345
123456
1234567
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d" , &n);
    for (int i =0 ; i <n ; i++){
        for(int j = 1 ; j<= i+1 ; j++){
            printf("%d" , j);
        }
        printf("\n");
    }
    return 0;
}

