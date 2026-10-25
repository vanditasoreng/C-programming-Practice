#include <stdio.h>
void main()
{
    printf("Hello User");
    int a;
    printf("Write a number: ");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("the number is even");
    }
    else
    {
        printf("the number is odd");
    }
    printf("Thank you for using this program");
}