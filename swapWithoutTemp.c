#include <stdio.h>

int swapWithoutTemp()
{
    int a;
    int b;
    printf("Enter number1: ");
    scanf("%d" , &a);
    printf("Enter number2: ");
    scanf("%d" , &b);
    
    a = a+b;
    b = a -b;
    a = a-b;
    
    printf("%d %d" , a , b);

    return 0;
}
