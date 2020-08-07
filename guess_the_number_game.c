#include<stdio.h>
int main()
{
	srand(time(0));
    int key,num,i,count=0;
    key=rand()%10+1;  //This %10+1 takes a number between the range 0-10.
    printf("Find the number GAME\n");
    printf("Enter a number between 0-1");
    for(i=0;i<5;i++)
    {
    	scanf("%d",&num);
    	if(num==key)
        {
			printf("Number Matched");
			goto end;
        }
        else
        {
            printf("Wrong answer\n Try again\n");
            count++;
        }
    }
    end:
        if(count<=4)
            printf("You took %d attempts\n",count);
        elseif(count==5)    
        printf("You failed \nThe number was %d",key);
    return 0;
}