#include<stdio.h>
void main()
{
int ch;
float b,a;
scanf("%f",&b);
scanf("%f",&a);
switch(ch)
{
    case 1:
           printf("\nBalance=%.2f",b);
    break;
    case 2:
           scanf("%f",&a);
           if(a<=b)
           {
               b=b-a;
               printf("\nTransaction Successful");
               printf("Balance=%.2f",b);
           }
           else
               printf("Insufficient balance");
    break;
    case 3:
            scanf("%f",a);
            b=b+a;
            printf("\nDeposit successful");
            printf("Balance=%.2f",b);
    break;
    default:
           printf("Invalid Option");
}
  
}