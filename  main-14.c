#include<stdio.h>
void main()
{
float a,b,c,d,e,total,average;
printf("Enter marks of five subjects:");
scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
total=a+b+c+d+e;
printf("\ntotal=%.2f",total);
average=(total)/5;
printf("\naverage=%.2f",average);
}