/*
    Program to Check if a Number is even or odd
*/

#include<stdio.h>

int main()
{
    printf("Program to Check if a Number is even or odd by using *Ladder If Else*");
    
    int no;
    printf("\n\nEnter the number : ");
    scanf("%d", &no);
    
    if(no % 2 == 0)
    {
        printf("\nThe given number is an even number");
    }
    else if(no % 2 != 0)
    {
        printf("\nThe given number is an odd number");
    }
    else
    {
        printf("Check one more time");
    }
    
    return 0;
}
