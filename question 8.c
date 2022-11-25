/*Write a recursive function to print binary of a given decimal number*/
#include<stdio.h>
void binary(int x);
int main()
{int n;
  printf("enter a decimal number to gets its binary: ");
  scanf("%d",&n);
  binary(n);
 return 0;
}
void binary(int x)
{ if(x==0)
      return;
    binary(x/2);
    printf("%d",x%2);
 return 0;
}
