/*Write a recursive function to print first N even natural numbers*/
#include<stdio.h>
void even(int);
int main()
{ int n;
    printf("Enter range to print even numbers: ");
    scanf("%d",&n);
       even(n);
 return 0;
}
void even(int x)
{ int num=0;
    if(x>1)
   even(x-1);
   num=x*2;
   printf("%d\n",num);
}

