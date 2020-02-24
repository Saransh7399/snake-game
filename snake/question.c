#include<stdio.h>
#include<conio.h>


int main()
{
	int i;
	for(i=1;i<=10;i++)
	ques(i);
}
int ques()
{
	int question,ch;
	{
	question=(rand()%6)+1;
	if(question==1)
	{
	printf("The value of x + x(x+x) when x = 2 is:\n");
	printf("enter choice\t 1:10\t 2:16\t 3:18\t 4:36\t 5:64");
	scanf("%d",&ch);
	if(ch==1)
	{
	printf("answe is correct\n");
	return 1;
    }
	else
	{
	printf("anser is incorrect\n");
	return 0;
    }
    }
	
	else if(question==2)
	{
	printf(" If 102y = 25, then 10-y equals:\n");
	printf("enter choice\t 1:-1/5\t  2:1/625\t 3:1/50\t 4:1/25\t 5:1/5\n");
    scanf("%d",&ch);
    if(ch==5)
    {
	printf("answe is correct\n");
	return 1;
    }
	else
	{
	printf("anser is incorrect\n");
	return 0;
    }
    }
    
	else if(question==3)
	{
	printf(" Find the cube of each of  1²/3: \t");
	printf("enter choice\t 1:12/23\t 2:125/27\t 3:34\t 4:23/67\n");
	scanf("%d",&ch);
	if(ch==2)
	{
	printf("answe is correct\n");
	return 1;
    }
	else
	{
	printf("anser is incorrect\n");
	return 0;
    }
    }
    
	else if(question==4)
	{
	printf("  What is the greatest two digit number?\n");
	printf("enter choice\t 1:12\t 2:90\t 3:99\t 4:78\n");
	scanf("%d",&ch);
	if(ch==3)
    {
	printf("answe is correct\n");
	return 1;
    }
	else
	{
	printf("anser is incorrect\n");
	return 0;
    }
    }
    
	else if(question==5)
	{
	printf(" Find the value of x; if x = (2 * 3) + 11\n");
	printf("enter choice\t 1:12\t 2:45\t 3:21\t 4:17\n");
	scanf("%d",&ch);
	if(ch==4)
	 {
	printf("answe is correct\n");
	return 1;
    }
	else
	{
	printf("anser is incorrect\n");
	return 0;
    }
    }
    
	else 
	{
	printf("What is the smallest three digit number?\n");
	printf("enter choice\t 1:100\t 2:101\t 3:123\t 4:102\n");
	scanf("%d",&ch);
	if(ch==1)
	 {
	printf("answe is correct\n");
	return 1;
    }
	else
	{
	printf("anser is incorrect\n");
	return 0;
    }
    }
}

}
