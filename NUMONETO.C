#include<stdio.h>
#include<conio.h>
void main()
{
int num=10,i=1,num2=0;
clrscr();
printf("Enter the number");
scanf("%d",&num2);

	while(i<=num)
	{
		printf("%d X %d = %d \n",num2,i,num2*i);
		i++;
	}

getch();
}
