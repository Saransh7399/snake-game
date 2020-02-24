#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int width=50,height=20,game,score,x,y,fx,fy,ch;
int tx[30],ty[30],tempx1,tempx2,tempy1,tempy2,ct;
char name[100],sur[100];
void display()
{
	int i,j,k,flag=1;
	system("CLS");
	//include expression here
	for(i=0;i<height;i++)
	{
		for(j=0;j<width;j++)
		{
			if(i==0 || i==height-1 || j==0 || j==width-1)
			{
				printf("*");	
			}
			else if(j==x && i==y)
			{
				printf("O");	
/*				for(k=0;k<ct;k++)
			{
				if(ty[k]==i&&tx[k]==j)
				{
					printf("o");
					flag=0;
				}
			}
*/			}	
			else if(j==fx && i==fy)
			{
				printf("F");	
			}	
			else
			{
				flag=1;
				for(k=0;k<ct;k++)
				{
					if(ty[k]==i&&tx[k]==j)
					{
						printf("o");
						flag=0;
					}
				}
				if(flag)
				{
					printf(" ");
				}
			}
			
		}
		printf("\n");
	}
	printf("SCORE : %d\n",score);
}
initial()
{
	game =1;
	score=0;
	ct=0;
	x=width/2;
	y=height/2;
	l1:
	fx=rand()%width;
	if(fx==0)
		goto l1;
	l2:
	fy=rand()%height;
	if(fy==0)
		goto l2;
		
}
int  input()
{
//	int ch;
	if(kbhit())
		switch(getch())
		{
		case 'a':ch=1;break;
		case 's':ch=2;break;
		case 'd':ch=3;break;
		case 'w':ch=4;break;
		case 'x':game=0;break;
		default:break;
		}
//	return(ch);
}

void move()
{
//	while(kbhit())
//	{
		int i;
		tempx1=x;
		tempy1=y;
		for(i=0;i<ct;i++)
		{
			tempx2=tx[i];
			tempy2=ty[i];
			tx[i]=tempx1;
			ty[i]=tempy1;
			tempx1=tempx2;
			tempy1=tempy2;
		}
/*		tempx1=tx[0];
		tempy1=tx[0];
		tx[0]=x;
		ty[0]=y;
		for(i=1;i<ct;i++)
		{
			tempx2=tx[i];
			tempy2=ty[i];
			tx[i]=tempx1;
			ty[i]=tempy1;
			tempx1=tempx2;
			tempy1=tempy2;
		}
*/		switch(ch)
		{
			case 1: x--;break;
			case 2: y++;break;
			case 3: x++;break;
			case 4: y--;break;
			default:break;
		}
		if(x<=0 || x>=width-1 || y<=0 || y>=height-1 )
		{
			game =0;
		}
		if(x==fx && y==fy)
		{
			l3:
			fx=rand()%width;
			if(fx==0)
				goto l3;
			l4:
			fy=rand()%height;
			if(fy==0)
				goto l4;
			ct++;
			score++;			
		}
//	}
		for(i=0;i<ct;i++)
		{
			if(x==tx[i]&&y==ty[i])
			{
				game=0;
			}
		}
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
void main()
{
	char b,m,n,q;
	int i,j,ans;
	
	l5:
	system("cls");
	fflush(stdin);
	printf("welcome to  the snake game\n");
	printf("press 1:to start the game \n      2:to view scores\n      3:exit\n");
	rchoice:
	fflush(stdin);
//	scanf("%d",&m);
	scanf("%c",&m);
	if(m=='2')
	{
		show_details();
		printf("\npress b to go back\n");
		bac:
		fflush(stdin);
		scanf("%c",&b);
		if(b=='b'||b=='B')
		{
			goto l5;
		}
		else
		{
			printf("invalid input (press b in order to return to main menu)");
			goto bac;
		}
	}
	else if(m=='1')
	{
	
		initial();
//	printf("%d %d %d %d\n",x,y,fx,fy);
		while(game)
		{
			label9:
			display();
			input();
			move();	
			for(i=0;i<1000;i++)
				for(j=0;j<1000;j++)
				{
				}
		
		}
		printf("**********game over************\n");
	
//		printf("press 1 key to continue\n");
printf("Continue by answerig the question\n");
    printf("Press C to continue\n");
    fflush(stdin);
    scanf("&c",&q);
    if(q=='c')
    {
	ans=ques();
	if(ans==1)
	goto label9;
    }
    	printf("press 1 to save your score 2:continue without saving 3:exit without saving\n");
		l6:
		fflush(stdin);
		scanf("%c",&n);
		//create data structure to store scores
		if(n=='1')
		{
			save_details();
			printf("your score is successfully saved\n");
			goto l5;
		}
		else if(n=='2')
		{
			system("cls");
			goto l5;
		}
		else if(n=='3')
		{
			game=0;
		}
		else
		{
			printf("invalid input (press given choices only)\n");
			goto l6;
		}
	}

	else if(m=='3')
	{
		return;
	}
	else
	{
		printf("invalid choice\n");
		goto rchoice;
	}
}


void save_details()
{
	FILE *fp2;
	system("cls");
	printf("Enter your name \n");
	fflush(stdin);
	gets(name);
//	printf("ENter score \n");
//	scanf("%d",&score);
	fflush(stdin);

	fp2 = fopen("text3.txt","a");
	fprintf(fp2,"%s %d",name,score);
	fclose(fp2);
	

}


void show_details()
{	
	system("cls");
	printf("\n RECORD \n");
	FILE *fp;
	fp = fopen("text3.txt","r");
	if(fp==NULL)
	{
		printf("File no found\n");
	}
	while(feof(fp)==0)
	{
		fscanf(fp,"%s %s %d",name,sur,&score);
		printf("%s %s %d \n",name,sur,score);
		
	}
	
	fclose(fp);
}
