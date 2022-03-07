#include<stdio.h>
int main()
{
 int i=1,n,sum=0;
 printf("ENTER THE NUMBER UPTO WHICH ODD NO. WANTED:-");
 scanf("%d",&n);
 while (i<=n)
 {
     printf("ODD NUMBERS:-%d \n",i);
     i=i+2;
     //sum=sum+i;
 }
 printf("%d",sum);
    return 0;

}