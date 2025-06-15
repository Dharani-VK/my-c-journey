//16)Check whether the given character is in upper case or lower case

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    char a;
    scanf("%c" , &a);
    if ( a >= 65 && a <= 90){
        printf("UPPERCASE");
    }
    else if(a >= 97 && a <= 122){
        printf("LOWERCASE");
    }
    return 0;
}
