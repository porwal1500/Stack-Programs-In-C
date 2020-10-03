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
void pop()
{
	if(top<=-1)
    	{
       		printf("\nStack is Underflow");
   	}
    	else
    	{
        	printf("\t The deleted element is %d",stack[top]);
        	top--;
    	}
}
void main()
{
	int choice;
	while(1)
	{
		printf("Select the operation :\n1). Push\n2). Pop\n3). Traverse\n4). Exit: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: 
				push();
				break;
			case 2: 
				pop();
				break;
			case 3: 
				traverse();
				break;
			case 4: 
				exit(0);
				break;
		}
	}	
}
