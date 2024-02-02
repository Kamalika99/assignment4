#include<stdio.h>
void main()
{ float a,b,c;
    printf("enter credit score and balance ");
 scanf("%f%f",&a,&b);
    if(a<600)
   { c=0.15*b;
    printf("intrest is %f",c);
    }
      else if(a<750 && a>=600)
   { c=0.12*b;
    printf("intrest is %f",c);
    }
     else if(a>=750)
   { c=0.1*b;
    printf("intrest is %f",c);
    }
}