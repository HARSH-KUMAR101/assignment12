/*Write a recursive function to print first N even natural numbers in reverse order*/
#include<stdio.h>
void even(int);
int main()
{ int n;
    printf("Enter range to print even numbers in reverse: ");
    scanf("%d",&n);
       even(n);
 return 0;
}
void even(int x)
{ int num=0;
  if(x==0)
    return;
    num=x*2;
   printf("%d\n",num);
   even(x-1);
}


