#include <stdio.h>
int main()
{
    // Declaration of the variables
    int i4Num1;
    int i4Num2;
    int i4SumResult;

    printf("Enter the num1:");
    scanf("%d", &i4Num1);

    printf("Enter the num2:");
    scanf("%d", &i4Num2);

    // Main sum logic
    i4SumResult = i4Num1 + i4Num2;

    // Printing the sum output
    //printf("Result of 2 given numbers is %d\n", i4SumResult);
    printf("Result of %d and %d numbers is %d\n", i4Num1, i4Num2, i4SumResult);

    // exit from the main
    return 0;
}


/*
 * Output:
 * -------
 * Enter the num1:12
 * Enter the num2:24
 * Result of 12 and 24 numbers is 36
 * */
