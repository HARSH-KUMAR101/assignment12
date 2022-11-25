/*Write a recursive function to print squares of first N natural numbers*/
#include<stdio.h>
int square(int);
int main()
{ int n,sum;
    printf("Enter range to print square of natural numbers: ");
    scanf("%d",&n);
       sum=square(n);
        printf("sum is %d",sum);
 return 0;
}
int square(int x)
{ int sum=0;
    if(x>0)
   sum=x*x+square(x-1);
return sum;
}

