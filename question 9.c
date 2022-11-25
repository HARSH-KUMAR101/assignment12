/*Write a recursive function to print octal of a given decimal number*/
#include<stdio.h>
void octal(int x);
int main()
{int n;
    printf("enter a decimal number to gets its octal number: ");
    scanf("%d",&n);
  octal(n);
 return 0;
}
void octal(int x)
{ if(x==0)
      return;
    octal(x/8);
    printf("%d",x%8);
 return 0;
}
