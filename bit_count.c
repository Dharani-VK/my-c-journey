#include <stdio.h>

int bit_count(int n){
    int count = 0;
    while(n){
        n = n & (n-1);
        count++;
    }
    return count;
}

int main()
{
    int num;
    printf("enter a number :");
    scanf("%d" , &num);
    
    int result = bit_count(num);
    printf("%d" ,result);
    

    return 0;
}
