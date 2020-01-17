#include<stdio.h>
#include<graphics.h>
#include<conio.h>
	struct ans
	{
		int num;
		int y;
	};
	struct ans answer[4];
int percentage(struct ans answer)
{
	int per;
	per=((answer.y)*100)/(answer.num);
	return per;
}
void bargraph(int perc[4])
{
    int x,y,p=0;
    int i=DETECT,j;
    initgraph(&i,&j,"");
    setcolor(RED);
	x=getmaxx()/2;
	y=getmaxy()/2;
	line(x,y,x+600,y);
	line(x,y,x,y-300);
	setcolor(CYAN);
	setfillstyle(SOLID_FILL,RED);
	rectangle(5,5,55,25);
	floodfill(10,20,CYAN);
	setfillstyle(SOLID_FILL,GREEN);
	rectangle(5,40,55,65);
	floodfill(10,50,CYAN);
	outtextxy(60,5,"YES");
	outtextxy(60,45,"NO");
	settextstyle(0,0,4);
	outtextxy(x+100,y+10,"AGE");
	settextstyle(0,1,2);
	outtextxy(x-5,y-200,"PERCENTAGE");
	setcolor(RED);
	for(int k=0;k<5;k++)
	{
	     for(int l=0;l<2;l++)
		 {
		 	if(l==1)
		 	{
		 		setfillstyle(SOLID_FILL,RED);
		 	     bar3d(x,y-perc[k],x+50,y,10,1);
		 	     x+=50;
		    }
		 	else if(l==0)
		 	{
		 		setfillstyle(SOLID_FILL,GREEN);
		 		bar3d(x,y-100+perc[k],x+50,y,10,1);
		 		x+=50;
			}
		 }	
	}
	getch();
	closegraph();	
}
int main()
{
	int i=DETECT,j,k;
	int per[4];
	puts("Between age");
	puts("15 to 30");
	scanf("%d",&answer[0].num);
	puts("30 to 45");
	scanf("%d",&answer[1].num);
	puts("45 to 60");
	scanf("%d",&answer[2].num);
	puts("60 to 75");
	scanf("%d",&answer[3].num);
	puts("75+");
	scanf("%d",&answer[4].num);
	for(k=0;k<5;k++)
	{
		puts("How many answer that hair fall occurs");
		scanf("%d",&answer[k].y);
	}
	for(k=0;k<5;k++)
	{
		per[k]=percentage(answer[k]);
	}
	bargraph(per);
	return 0;
}
