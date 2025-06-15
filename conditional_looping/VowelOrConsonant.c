//14)Check whether the given character is a Vowel or Consonant

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char a;
    scanf("%c" , &a);
    if(a=='A'|| a=='a' || a== 'E' || a == 'e' || a== 'i'||a=='I' || a == 'O'||a=='o'||a=='u'||a=='U'){
        printf("Vowel");
    }
    else{
        printf("Consonant");
    }
    return 0;
}

