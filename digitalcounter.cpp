#include<graphics.h>
#include<conio.h>
int main()
{
	int i=DETECT,j,x,y,sec=0,min=0,hr=0;
	char ch[30];
	initgraph(&i,&j,"");
	setcolor(RED);
	x=4*getmaxx()/2+100;
	y=4*getmaxy()/2+100;
	outtextxy(200,100,"STOP WATCH");
	settextstyle(10,0,2);
	while(1)
	{
		setfillstyle(SOLID_FILL,CYAN);
		rectangle(200,300,400,400);
		floodfill(250,350,RED);
		sprintf(ch,"%d:%d:%d",hr,min,sec);
		sec++;
		outtextxy(250,350,ch);
		delay(1000);
		if(sec==60)
		{
			sec=0;
			min++;
			if(min==60)
			{
				min=1;
				hr++;
			}
		}
		if(kbhit())
		break;
		cleardevice();
		outtextxy(200,100,"STOP WATCH");
	}
	fflush(stdin);
	delay(5000);
	getch();
	closegraph();
	return 0;
}
