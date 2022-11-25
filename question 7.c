/*Write a recursive function to print squares of first N natural numbers*/
#include<stdio.h>
int square(int);
int main()
{ int n,sum;
    printf("Enter range to print square of natural numbers: ");
    scanf("%d",&n);
       square(n);

 return 0;
}
int square(int x)
{ int sum=0;
    if(x>1)
    square(x-1);
    sum=x*x;
    printf("%d\n",sum);
return sum;
}

