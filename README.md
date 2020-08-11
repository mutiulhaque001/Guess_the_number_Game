# Guess_the_number_Game
It is a simple program that takes a random number within a given range and asks the users to guess the number.It gives a single user(single run of program)5 attempts to guess the number.If the number is found,the program ends.

#include<stdio.h><br>
#include<stdlib.h>	//This header file is used for importing rand(random)function.<br>
#include<time.h>	//This header file is used for importing time function.<br>
int main()<br>
{<br>
&emsp;	srand(time(0));<br>
&emsp;	int key,num,i,count=0;<br>
&emsp;	key=rand()%10+1;  //This %10+1 takes a number between the range 0-10.<br>
&emsp;	printf("Find the number GAME\n");<br>
&emsp;	printf("Enter a number between 0-1\n");<br>
&emsp;	for(i=0;i<5;i++)<br>
&emsp;	{<br>
&emsp;&emsp;		scanf("%d",&num);<br>
&emsp;&emsp;		count++;<br>
&emsp;&emsp;		if(num==key)<br>
&emsp;&emsp;		{<br>
&emsp;&emsp;&emsp;			printf("Number Matched\n");<br>
&emsp;&emsp;&emsp;			if(count<=5)<br>
&emsp;&emsp;&emsp;&emsp;				printf("You took %d attempts\n",count);<br>
&emsp;&emsp;&emsp;			break;<br>
&emsp;&emsp;		}<br>
&emsp;&emsp;		else<br>
&emsp;&emsp;		{<br>
&emsp;&emsp;&emsp;			if(count<=4)<br>
&emsp;&emsp;&emsp;&emsp;				printf("Wrong answer\n Try again\n");<br>
&emsp;&emsp;&emsp;			else<br>
&emsp;&emsp;&emsp;				printf("You failed\nThe number was %d\n",key);<br>
&emsp;&emsp;		}<br>
&emsp;	}<br>
&emsp;	return 0;<br>
}<br>
