#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int width=20,height=20,gameover;
int x,y,fruitx,fruity,score,flag;
int tailx[100],taily[100];
int counttail=0;
void setup()
{
//	printf("Enter name\n");
//	scanf("%c",&ch);
	
	gameover=0;
	x=width/2;
	y=height/2;
	
	label1:
	fruitx=rand()%20;
	if(fruitx==0)
	goto label1;
	
	label2:
	fruity=rand()%20;
	if(fruity==0)
	goto label2;
	score=0;
}
void draw()
{
	int i,j,k;
	system("cls");
	for(i=0;i<width;i++)
	{
	for(j=0;j<height;j++)
	{
		if(i==0||i==height-1||j==0||j==width-1)
		{
		printf("#");
	    }
	    else
	    {
	    	if(i==x&&j==y)
	    	printf("0");
	    	else if(i==fruitx&&j==fruity)
			printf("F");
			else 
			{
				int ch=0;
				for(k=0;k<counttail;k++)
				{
					if(i==tailx[k]&&j==taily[k])
					{
					printf("0");
					ch=1;
					}
				}
		    if(ch==0)
			printf(" ");
			}
	    }
	    
	}
	printf("\n");
    }
    printf("SCORE:%d",score);
}
void input()
{
	if(kbhit())
	{
		switch(getch())
		{
			case 'a':
				flag=1;
				break;
			case 'd':
			    flag=2;
			    break;
			case 'w':
			    flag=3;
			    break;
			case 's':
			    flag=4;
			    break;
		    case 'x':
			   	gameover=1;
			    break;
		}
	}
}
void makelogic()
{
	int i;
	int prevx=tailx[0];
	int prevy=taily[0];
	int prev2x,prev2y;
	tailx[0]=x;
	taily[0]=y;
	for(i=1;i<counttail;i++)
	{
		prev2x=tailx[i];
		prev2y=taily[i];
		tailx[i]=prevx;
		taily[i]=prevy;
		prevx=prev2x;
		prevy=prev2y;
	}
	switch(flag)
	{
		case 1:
			y--;
			break;
		case 2:
			y++;
			break;
		case 3:
			x--;
			break;
		case 4:
			x++;
			break;
		default:
		        break;	
	}
	if(x<0||x>width||y<0||y>height)
	gameover=1;
	for(i=0;i<counttail;i++)
	{
		if(x==tailx[i]&&y==taily[i])
		gameover=1;
	}
	if(x==fruitx&&y==fruity)
	{
	label3:
	fruitx=rand()%20;
	if(fruitx==0)
	goto label3;
	
	label4:
	fruity=rand()%20;
	if(fruity==0)
	goto label4;
	score+=10;
	counttail++;	
	}
}
int main()
{
	int m,n;
	char c, ch;
	 label5:
	setup(); 
	while(!gameover)
	{
	draw();
	input();
	makelogic();
	for(m=0;m<1000;m++)
	{
	for(n=0;n<10000;n++)
	{
	}
    }
    }
    printf("\nPress y to continue:\t");
    scanf("%c",&c);
    if(c=='y'||c=='Y')
    goto label5;
	return 0;
}
