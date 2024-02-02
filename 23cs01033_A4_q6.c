#include <stdio.h>
void main()
{
    int ch,a,b,x;
    printf("Enter the two numbers ");
    scanf("%d %d",&a,&b);
    printf("\n 1:addition");
    printf("\n 2:subtraction");
    printf("\n 3:multiplictaion");
    printf("\n 4:quotient ");
    printf("\n 5:remainder");
    printf("\n Enter choice");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        x=a+b;
        printf("Sum=%d", x);
        break;
        case 2:
        x=a-b;
        printf("difference=%d",x);
        break;
        case 3 :
        x=a*b;
        printf("product=%d",x);
        break;
        case 4:
        x=a/b;
        printf("quotient=%d",x);
        break;
        case 5:
        x=a%b;
        printf("remainder=%d",x);
        break;
        default:
        printf("Invalid choice");
        break;
    }
}