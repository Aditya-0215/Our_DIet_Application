#include<stdio.h>
 int main(){
     int a,b,op;
     float c;                                           //SWITCH HOMEWORK {CHOICE}
     

     printf("ENTER TWO NUMBERS:-");
     scanf("%d%d",&a,&b);


     printf("\n1: ADDITION");
      printf("\n2: SUBTRACTION");                               
       printf("\n3: MULTIPLICATION");
        printf("\n4: DIVISION");
printf("\n ENTER THE OPERATION");
scanf("%d",&op);
       switch (op)
       {
       case 1:
           c=a+b;
           printf("Sum is %f",c);
           break;
           case 2:
           c=a-b;
           printf("sub is %f",c);
           break;
            case 3:
           c=a*b;
           printf("multiplication is %f",c);
           break;
           case 4:
           c=a/b;
           printf("divide is %f",c);
           break;

           default:
           printf("INVALID INPUT");
           break;
       }
            
        





return 0;


 }