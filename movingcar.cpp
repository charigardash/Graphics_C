#include<graphics.h>
#include<conio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
	int i=DETECT,j,x=0;
	char ch;
	initgraph(&i,&j,"");
	setcolor(RED);
	setfillstyle(SOLID_FILL,BLUE);
	line(0,333,getmaxx()+100,333);
	for(x=0;x<getmaxx();x++)
	{
	line(x+30,280,x+70,280);
	line(x+70,280,x+85,300);
	line(x+85,300,x+100,300);
	line(x+100,300,x+100,325);
	line(x+100,325,x+76,325);
	line(x+61,325,x+38,325);
	line(x+23,325,x,325);
	line(x,300,x,325);
	line(x,300,x+15,300);
	line(x+15,300,x+30,280);
	setfillstyle(SOLID_FILL,CYAN);
	circle(x+31,325,8);
	circle(x+69,325,8);
	floodfill(x+31,325,RED);
	floodfill(x+69,325,RED);
	delay(20);
	cleardevice();
	line(0,333,getmaxx()+100,333);
    }
    fflush(stdin);
	getch();
	closegraph();
	return 0;
}
