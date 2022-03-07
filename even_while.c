#include<stdio.h>
int main()
{
 int i=0,n;
 printf("ENTER THE NUMBER UPTO WHICH EVEN NO. WANTED:-");
 scanf("%d",&n);
 while (i<=n)
 {
     printf("EVEN NUMBERS:-%d \n",i);
     i=i+2;
 }
 
    return 0;

}