#include<graphics.h>
#include<conio.h>
int main()
{
	int i=DETECT,j,x=100,y,z;
	initgraph(&i,&j,"");
	setcolor(RED);
	setfillstyle(SOLID_FILL,RED);
	while(x!=550)
	{
		for(y=x;y<=550;y++)
		{
		    circle(200,y,50);
			floodfill(200,y,RED);
			delay(20);
			line(0,600,getmaxx(),600);
			cleardevice();
			line(0,600,getmaxx(),600);	
		}
		x+=50;
		for(z=y;z>=x;z--)
		{
			circle(200,z,50);
			floodfill(200,z,RED);
			line(0,600,getmaxx(),600);
			delay(20);
			cleardevice();
			line(0,600,getmaxx(),600);
		}
	}
	circle(200,550,50);
	floodfill(200,550,RED);
	getch();
	closegraph();
	return 0;
}
