#include<stdio.h>
void main()
{   int a;
    printf("enter a number ");
    scanf("%d",&a);
    switch (a%2)
    {
    case 0:
        printf("even");
        break;
    case 1:
    printf("odd");
    break;
    default:
    printf("error");
        break;
    }
}