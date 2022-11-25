/*Write a recursive function to print reverse of a given number*/
#include<stdio.h>
void reverse(int x);
int main()
{int num;
     printf("enter a num to print its reverse number: ");
     scanf("%d",&num);
    reverse(num);
 return 0;
}
void reverse(int n)
{   if(n==0)
    return;
    printf("%d",n%10);
   reverse(n/10);
}
