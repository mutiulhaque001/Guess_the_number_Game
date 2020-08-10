#include<stdio.h>
#include<stdlib.h>	//This header file is used for importing rand(random)function.
#include<time.h>	//This header file is used for importing time function.
int main()
{
	srand(time(0));
	int key,num,i,count=0;
	key=rand()%10+1;  //This %10+1 takes a number between the range 0-10.
	printf("Find the number GAME\n");
	printf("Enter a number between 0-1\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&num);
		count++;
		if(num==key)
		{
			printf("Number Matched\n");
			if(count<=5)
				printf("You took %d attempts\n",count);
			break;
		}
		else
		{
			if(count<=4)
				printf("Wrong answer\n Try again\n");
			else
				printf("You failed\nThe number was %d\n",key);
		}
	}
	return 0;
}
