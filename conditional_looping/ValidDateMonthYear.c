//10)Write a program to find a specific date ,check wheteher the date is Valid or Not . Year will be in rangen 1900 to 9999

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int leap_year(int year){
    if(year % 4 == 0 ){
        if(year % 100 == 0){
            if(year % 400 == 0){
                return 1;
            }
            return 0;
        }
        return 1;
    }
    return 0;
}

int check(int day, int month,int year){
    if (year < 1900 || year > 9999){
        return 0;
    }
    if(month < 1 || month > 12){
        return 0;
    }
    int daysInMonth;
    if(month == 2){
        daysInMonth = leap_year(year)? 29 : 28;
    }
    else if(month == 4 || month == 6 || month == 9 || month == 11){
        daysInMonth = 30;
    }
    else{
        daysInMonth = 31;
    }
    
    return (day >= 1 && day <= daysInMonth);
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int day,month,year;
    scanf("%d/%d/%d" , &day , &month , &year);
    if(check(day,month,year)){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
    
    return 0;
}

