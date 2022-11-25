/*Write a recursive function to print first N odd natural numbers*/
#include<stdio.h>
void odd(int);
int main()
{ int n;
    printf("Enter range to print odd numbers: ");
    scanf("%d",&n);
       odd(n);
 return 0;
}
void odd(int x)
{ int num=0;
    if(x>1)
   odd(x-1);
   num=x*2-1;
   printf("%d\n",num);
}

