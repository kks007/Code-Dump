#include<stdio.h>

int n;
int stk[]={};
void push(int* a,int el);
void display(int *a);
int pop(int* a);

int main()
{
	int c,data;
	for(int i=0; i<1000;i++)
	{
	printf("Select from following options:\n");
	printf("1. Push\n");
	printf("2. Pop\n");
	printf("3. Display\n");
	printf("4. Exit\n");
	printf("\nEnter choice number:");
	scanf("%d",&c);
		switch(c)
		{
			case 1:
				printf("\nEnter element to push:");
				scanf("%d",&data);
				push(stk,data);
				display(stk);
				break;
			case 2:
				printf("\nPopped element : %d\n",pop(stk));
				display(stk);
				break;
			case 3:
				display(stk);
				break;
			case 4:
				break;
		}
		if(c==4){
			break;
		}
	}
}



void push(int* a,int el)
{
	a[n]= el ;
	n+=1;
}


int pop(int* a)
{
	int el = a[n-1];
	n--;
	return el;
}


void display(int *a)
{
	printf("\n\nCurrent list >>  ");
	for(int i=n-1;i>=0;i--){
		printf("%d  ",a[i]);
	}
	printf("<<\n\n");
}