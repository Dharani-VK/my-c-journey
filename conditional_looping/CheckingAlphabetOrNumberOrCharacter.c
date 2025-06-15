//15)Check whether the given character is an alphabet or a number or special character

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    char input;
    scanf("%c" , &input);
    if((input >= 65 && input >= 90)|| (input >= 97 && input <= 122)){
        printf("ALPHABET");
    }
    else if(input >= 48 && input <= 57){
        printf("NUMBER");
    }
    else{
        printf("SPECIAL CHARACTER");
    }
    return 0;
}
