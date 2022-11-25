/*Write a recursive function to print first N natural numbers*/
#include<stdio.h>
void print(int);
int main()
{ int n;
    printf("Enter range to print natural numbers: ");
    scanf("%d",&n);
       print(n);
 return 0;
}
void print(int x)
{  if(x>1)
    print(x-1);
   printf("%d\n",x);
}
