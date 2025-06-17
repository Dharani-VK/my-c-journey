/*6)Write a program to accept the n value and display the below pattern

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
21
321
4321
54321
Sample Input 1

7
Sample Output 1

1
21
321
4321
54321
654321
7654321
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d" , &n);
    
    for(int i = 1; i <= n; i++){
        for(int j = i ; j >= 1; j--){
            printf("%d" , j  );
        }
        // for(int k = 1 ; k < n-i+ ; k++){
        //     printf("-");
        // }
        printf("\n");
    }
    return 0;
}


