#include<stdio.h>
int main()
{
 int i=1,n;
 int sum=0;
 printf("ENTER THE NUMBER UPTO WHICH ODD NO. WANTED:-");
 scanf("%d",&n);
 while (i<=n)
 {    sum=sum+i;
     printf("ODD NUMBERS:-%d \n",i);
     i=i+2;
     
 }
 printf("%d",sum);
    return 0;

}