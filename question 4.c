/*Write a recursive function to print first N odd natural numbers in reverse order*/
#include<stdio.h>
void odd(int);
int main()
{ int n;
    printf("Enter range to print odd numbers in reverse: ");
    scanf("%d",&n);
       odd(n);
 return 0;
}
void odd(int x)
{ int num=0;
  if(x==0)
    return;
    num=x*2-1;
   printf("%d\n",num);
   odd(x-1);
}

