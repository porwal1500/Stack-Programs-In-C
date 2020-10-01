#include<stdio.h>
int top=-1, element, stack[50],n,x;
printf("Enter the size of array between 1 to 50");
scanf("%d,&n");
void push()
{
	if(top>=n-1)
    	{
        	printf("\nSTACK is Overflow");
         
  	}
	else
    	{
        	printf(" Enter a value to be inserted:");
        	scanf("%d",&x);
        	top++;
        	stack[top]=x;
   	}
}
void traverse()
{
	if(top>=0)
    	{
        	printf("\n The elements in STACK are: \n");
        	for(i=top; i>=0; i--)
            	printf("\n%d",stack[i]);
    	}
  	else
   	{
        printf("\nSTACK is empty");
    	}
}
