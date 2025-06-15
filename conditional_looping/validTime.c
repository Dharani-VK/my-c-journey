//17)Write a program to check whether the time is valid or not

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    //(+,-,*,/)
    int a, c;
    char b;
    scanf("%d %c %d" , &a,&b,&c);
    switch(b){
        case '+':
            printf("%d", a+c);
            break;
        case '-':
            printf("%d", a-c);
            break;
        case '*':
            printf("%d", a*c);
            break;
        case '/':
            printf("%d", a/c);
            break;
    }
    return 0;
}
